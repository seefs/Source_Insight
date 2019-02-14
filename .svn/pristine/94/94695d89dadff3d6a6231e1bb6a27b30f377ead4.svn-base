                               Android Audio framework structure


版本                   修改时间                修改人                  修改位置                 修改内容

V0.1                 2011.10.11          Gerry Li                                  创建文档
                                            Application
     Application A                                                                 N   Application


    MediaPlayer                           Java Framework                               AudioTrack
 (Framework Java)      B                                                     O      (Framework Java)


    MediaPlayer                           JNI Framework                                AudioTrack
  (libmedia_jni.so)    C                                                     P    (libandroid_runtime.so)


                                           Share Library
    MediaPlayer                                                                        AudioTrack
    (libmedia.so)      D                                                              (libmedia.so)      L

             Share Library / Media Service
                                                                                     Share Library /
  MediaPlayerService      E                AudioOutput                               Media Service
(libmediaplayerservice.so)            (MediaPhoneClient.cpp)
                                      libmediaplayerservice.so
                                             AudioSink
                                                            K                        AudioFlinger
                                                                                   (libaudiofling.so)
    StagefrightPlayer
(libmediaplayerservice.so)   F

                                                                                          M
                     H
                          Share Library
    AwesomePlayer
     libstagefright                       AudioPlayer
                                         libstagefright       J
                      I

    MediaExtractor
     libstagefright
-----------------------------------------------------------------------------------
A:  Application use mediaplayer
-----------------------------------------------------------------------------------
Play a audio file on android, just need the following steps:

I       MediaPlayer mp = new MediaPlayer();
II      mp.setDataSource(PATH_TO_FILE);
III     mp.prepare();
IV      mp.start();

-----------------------------------------------------------------------------------
B:  MediaPlayer.java
-----------------------------------------------------------------------------------

I     native_setup(new WeakReference<MediaPlayer>(this))
II      public native void setDataSource(String path)
III     public native void prepare()
IV      private native void _start()

-----------------------------------------------------------------------------------
C:  android_media_MediaPlayer.cpp
-----------------------------------------------------------------------------------

I       sp<MediaPlayer> mp = new MediaPlayer();
        sp<JNIMediaPlayerListener> listener = new JNIMediaPlayerListener(env, 
thiz,weak_this);
        mp->setListener(listener)
II      mp->setDataSource(String8(pathStr),headers ? &headersVector : NULL);
III     setVideoSurface(mp, env, thiz);
        process_media_player_call( env, thiz, mp->prepare(), ...);
IV      process_media_player_call( env, thiz, mp->start(), NULL, NULL );

Notes:  process_media_player_call (Exception handler)

-----------------------------------------------------------------------------------
D:      mediaplayer.cpp
-----------------------------------------------------------------------------------

I       do some initialization
II
status_t MediaPlayer::setDataSource(const char *url, ...)
{ 
    if (url != NULL) {
        const sp<IMediaPlayerService>& service(getMediaPlayerService());
        if (service != 0) {
            sp<IMediaPlayer> player(service->create(getpid(), this, url, headers));
            err = setDataSource(player);
        }
    }
    return err;
}

III 
status_t MediaPlayer::prepareAsync_l()
{
    if ( (mPlayer != 0) && ( mCurrentState & ( MEDIA_PLAYER_INITIALIZED | 
MEDIA_PLAYER_STOPPED) ) ) {
        mPlayer->setAudioStreamType(mStreamType);
        mCurrentState = MEDIA_PLAYER_PREPARING;
        return mPlayer->prepareAsync();
    }
    return INVALID_OPERATION;
}

Note: mPlayer is the player created by step II

IV:

status_t MediaPlayer::start()
{
    if ( (mPlayer != 0) && ( mCurrentState & ( MEDIA_PLAYER_PREPARED |
                    MEDIA_PLAYER_PLAYBACK_COMPLETE | MEDIA_PLAYER_PAUSED ) ) ) {
        mPlayer->setLooping(mLoop);
        mPlayer->setVolume(mLeftVolume, mRightVolume);
        mCurrentState = MEDIA_PLAYER_STARTED;
        status_t ret = mPlayer->start();
        return ret;
    }    
    return INVALID_OPERATION;
}

-----------------------------------------------------------------------------------
E: MediaplayerService.cpp
-----------------------------------------------------------------------------------

I: not process here

II: 
sp<IMediaPlayer> MediaPlayerService::create(
        pid_t pid, const sp<IMediaPlayerClient>& client, const char* url,
        const KeyedVector<String8, String8> *headers)
{
    int32_t connId = android_atomic_inc(&mNextConnId);
    sp<Client> c = new Client(this, pid, connId, client);    
    if (NO_ERROR != c->setDataSource(url, headers))
    {
        c.clear();
        return c;
    }
    wp<Client> w = c;    
    mClients.add(w);
    return c;
}


status_t MediaPlayerService::Client::setDataSource(
        const char *url, const KeyedVector<String8, String8> *headers)
{  
    if (strncmp(url, "content://", 10) == 0) {
        ...
    } else {
        player_type playerType = getPlayerType(url);
        // create the right type of player
        sp<MediaPlayerBase> p = createPlayer(playerType);
        if (!p->hardwareOutput()) {
            mAudioOutput = new AudioOutput();
            static_cast<MediaPlayerInterface*>(p.get())-
>setAudioSink(mAudioOutput);
        }
        // now set data source
        mStatus = p->setDataSource(url, headers);
        if (mStatus == NO_ERROR) {
            mPlayer = p;
        } 
        return mStatus;
    }
}


player_type getPlayerType(const char* url)
{
    if (!strncasecmp(url, "http://", 7)) {
        if (!useStagefrightForHTTP) {
            return PV_PLAYER;
        }
    }
    // Use PV_PLAYER for rtsp for now
    if (!strncasecmp(url, "rtsp://", 7)) {
     ...
        return PV_PLAYER;
        ...
    }
    return getDefaultPlayerType();
}


static player_type getDefaultPlayerType() {
#if BUILD_WITH_FULL_STAGEFRIGHT
    char value[PROPERTY_VALUE_MAX];
    if (property_get("media.stagefright.enable-player", value, NULL)
        && (!strcmp(value, "1") || !strcasecmp(value, "true"))) {
        return STAGEFRIGHT_PLAYER;
    }
#endif
    return PV_PLAYER;
}

/build/core/main.mk 
BUILD_WITH_FULL_STAGEFRIGHT := true


sp<MediaPlayerBase> MediaPlayerService::Client::createPlayer(player_type 
playerType)
{
    // determine if we have the right player type
    sp<MediaPlayerBase> p = mPlayer;
    if ((p != NULL) && (p->playerType() != playerType)) {
        LOGV("delete player");
        p.clear();
    }
    if (p == NULL) {
        p = android::createPlayer(playerType, this, notify);
    }
    return p;
}

static sp<MediaPlayerBase> createPlayer(player_type playerType, void* cookie,
        notify_callback_f notifyFunc)
{
    sp<MediaPlayerBase> p;
    switch (playerType) {
#ifndef NO_OPENCORE
        case PV_PLAYER:
            LOGV(" create PVPlayer");
            p = new PVPlayer();
            break;
#endif
        case SONIVOX_PLAYER:
            LOGV(" create MidiFile");
            p = new MidiFile();
            break;
        case VORBIS_PLAYER:
            LOGV(" create VorbisPlayer");
            p = new VorbisPlayer();
            break;
#if BUILD_WITH_FULL_STAGEFRIGHT
        case STAGEFRIGHT_PLAYER:
            LOGV(" create StagefrightPlayer");
            p = new StagefrightPlayer;
            break;
#endif
        case TEST_PLAYER:
            LOGV("Create Test Player stub");
            p = new TestPlayerStub();
            break;
    }
    if (p != NULL) {
        if (p->initCheck() == NO_ERROR) {
            p->setNotifyCallback(cookie, notifyFunc);
        } else {
            p.clear();
        }
    }
    if (p == NULL) {
        LOGE("Failed to create player object");
    }
    return p;
}
III

status_t MediaPlayerService::Client::prepareAsync()
{
    sp<MediaPlayerBase> p = getPlayer();
    status_t ret = p->prepareAsync();
    return ret;
}

Note: getPlayer() return the player created by step II
sp<MediaPlayerBase> getPlayer() const {Mutex::Autolock lock(mLock);return mPlayer;}

IV
status_t MediaPlayerService::Client::start()
{  
    return p->start();
}


-----------------------------------------------------------------------------------
F: StagefrightPlayer.cpp
-----------------------------------------------------------------------------------
    AwesomePlayer *mPlayer;
    mPlayer->XXXX();

-----------------------------------------------------------------------------------
H: AwesomePlayer.cpp
-----------------------------------------------------------------------------------
I

AwesomePlayer(){
   mVideoEvent = new AwesomeEvent(this, &AwesomePlayer::onVideoEvent);
   mStreamDoneEvent = new AwesomeEvent(this, &AwesomePlayer::onStreamDone);
   mBufferingEvent = new AwesomeEvent(this, &AwesomePlayer::onBufferingUpdate);
   mCheckAudioStatusEvent=new AwesomeEvent(this,&AwesomePlayer::onCheckAudioStatus)
}

II

status_t AwesomePlayer::setDataSource_l( const char *uri,...) {
    mUri = uri;
    return OK;
}
III
status_t AwesomePlayer::prepare() { 
    return prepare_l(); 
} 

status_t err = prepareAsync_l(); 

status_t AwesomePlayer::prepareAsync_l() { 
        mAsyncPrepareEvent = new AwesomeEvent(this, onPrepareAsyncEvent); 
      mQueue.postEvent(mAsyncPrepareEvent); 
} 

void AwesomePlayer::onPrepareAsyncEvent() { 
    if (mUri.size() > 0) { 
1       status_t err = finishSetDataSource_l(); 
    } 
    if (mVideoTrack != NULL && mVideoSource == NULL) { 
2       status_t err = initVideoDecoder(); 
    } 

    if (mAudioTrack != NULL && mAudioSource == NULL) { 
3       status_t err = initAudioDecoder(); 
    } 
    if (mCachedSource != NULL || mRTSPController != NULL) { 
        postBufferingEvent_l(); 
    } else { 
        finishAsyncPrepare_l(); 
    } 
} 

1: 
finishSetDataSource_l()  { 
    sp<MediaExtractor> extractor = MediaExtractor::Create(dataSource); 
    return setDataSource_l(extractor); 
} 

status_t AwesomePlayer::setDataSource_l(const sp<MediaExtractor> &extractor) {  
    bool haveAudio = false; 
    bool haveVideo = false; 
    for (size_t i = 0; i < extractor->countTracks(); ++i) { 
        sp<MetaData> meta = extractor->getTrackMetaData(i); 
        const char *mime; 
        if (!haveVideo && !strncasecmp(mime, "video/", 6)) { 
            setVideoSource(extractor->getTrack(i)); 
            haveVideo = true; 
        } else if (!haveAudio && !strncasecmp(mime, "audio/", 6)) { 
            setAudioSource(extractor->getTrack(i)); 
            haveAudio = true; 
        }      
    } 
} 

Question: 1. all media have only one AudioTrack and VideoTrack? If not, 
setAudioSource will lost the former one?

2 

status_t AwesomePlayer::initVideoDecoder(uint32_t flags) { 
        mVideoSource = OMXCodec::Create( 
                    mClient.interface(), mVideoTrack->getFormat(), 
                    false, // createEncoder 
                    mVideoTrack, 
                    NULL, flags ); 
         
        status_t err = mVideoSource->start(); 
}

3

status_t AwesomePlayer::initAudioDecoder() {
    if (!strcasecmp(mime, MEDIA_MIMETYPE_AUDIO_RAW)) {
        mAudioSource = mAudioTrack;
    } else {
        mAudioSource = OMXCodec::Create(
                mClient.interface(), mAudioTrack->getFormat(),
                false, // createEncoder
                mAudioTrack);
    }
    if (mAudioSource != NULL) {
        status_t err = mAudioSource->start();
    } 
    return mAudioSource != NULL ? OK : UNKNOWN_ERROR;
}

IV
status_t AwesomePlayer::play_l() {
    if (mAudioSource != NULL) {
        if (mAudioPlayer == NULL) {
            if (mAudioSink != NULL) {
                mAudioPlayer = new AudioPlayer(mAudioSink, this);
                mAudioPlayer->setSource(mAudioSource);

                // We've already started the MediaSource in order to enable
                // the prefetcher to read its data.
                status_t err = mAudioPlayer->start(true /*sourceAlreadyStarted */);

            }
        }
    }
    if (mVideoSource != NULL) {
        // Kick off video playback
        postVideoEvent_l();
    }
    return OK;
}

-----------------------------------------------------------------------------------
I: MediaExtractor.cpp
-----------------------------------------------------------------------------------
static 
sp<MediaExtractor> MediaExtractor::Create( 
        const sp<DataSource> &source, const char *mime) { 
    if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_MPEG4) || !strcasecmp(mime, 
"audio/mp4")) { 
        return new MPEG4Extractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_AUDIO_MPEG)) { 
        return new MP3Extractor(source, meta); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_AUDIO_AMR_NB) 
            || !strcasecmp(mime, MEDIA_MIMETYPE_AUDIO_AMR_WB)) { 
        return new AMRExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_WAV)) { 
        return new WAVExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_OGG)) { 
        return new OggExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_MATROSKA)) { 
        return new MatroskaExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_MPEG2TS)) { 
        return new MPEG2TSExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_CMMB)) { 
        return new CMMBExtractor(source); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_VIDEOPHONE_H263)) { 
        return new VideoPhoneExtractor(source, 1); 
    } else if (!strcasecmp(mime, MEDIA_MIMETYPE_CONTAINER_VIDEOPHONE_MPEG4)) { 
        return new VideoPhoneExtractor(source, 2); 
    } 
} 


-----------------------------------------------------------------------------------
J: AudioPlayer.cpp

status_t AudioPlayer::start(bool sourceAlreadyStarted) {
    if (mAudioSink.get() != NULL) {
        status_t err = mAudioSink->open(
                mSampleRate, numChannels, AudioSystem::PCM_16_BIT,
                DEFAULT_AUDIOSINK_BUFFERCOUNT,
                &AudioPlayer::AudioSinkCallback, this);

        mAudioSink->start();
    } else {
        mAudioTrack = new AudioTrack(
                AudioSystem::MUSIC, mSampleRate, AudioSystem::PCM_16_BIT,
                (numChannels == 2)
                    ? AudioSystem::CHANNEL_OUT_STEREO
                    : AudioSystem::CHANNEL_OUT_MONO,
                0, 0, &AudioCallback, this, 0);

        
        mAudioTrack->start();
    }
    return OK;
}


status_t MediaPhoneClient::AudioOutput::open(
        uint32_t sampleRate, int channelCount, int format, int bufferCount,
        AudioCallback cb, void *cookie)
{
    mCallback = cb;
    mCallbackCookie = cookie;

    AudioTrack *t;
    if (mCallback != NULL) {
        t = new AudioTrack(
                mStreamType,
                sampleRate,
                format,
                (channelCount == 2) ? AudioSystem::CHANNEL_OUT_STEREO : 
AudioSystem::CHANNEL_OUT_MONO,
                frameCount,
                0 /* flags */,
                CallbackWrapper,
                this);
    } else {
        t = new AudioTrack(
                mStreamType,
                sampleRate,
                format,
                (channelCount == 2) ? AudioSystem::CHANNEL_OUT_STEREO : 
AudioSystem::CHANNEL_OUT_MONO,
                frameCount);
    }
    return NO_ERROR;
}

void MediaPhoneClient::AudioOutput::start()
{
    if (mTrack) {
        mTrack->setVolume(mLeftVolume, mRightVolume);
        mTrack->start();
    }
}

-----------------------------------------------------------------------------------
L: AudioTrack.cpp
-----------------------------------------------------------------------------------
status_t AudioTrack::set(
        int streamType,
        uint32_t sampleRate,
        int format,
        int channels,
        int frameCount,
        uint32_t flags,
        callback_t cbf,
        void* user,
        int notificationFrames,
        const sp<IMemory>& sharedBuffer,
        bool threadCanCallJava)
{

    audio_io_handle_t output =        
        AudioSystem::getOutput((AudioSystem::stream_type)streamType,
            sampleRate, format, channels, (AudioSystem::output_flags)flags);

   
    // create the IAudioTrack
    status_t status = createTrack(streamType, sampleRate, format, channelCount,
                                  frameCount, flags, sharedBuffer, output);
    if (cbf != 0) {
        mAudioTrackThread = new AudioTrackThread(*this, threadCanCallJava);
        if (mAudioTrackThread == 0) {
          LOGE("Could not create callback thread");
          return NO_INIT;
        }
    }

}


status_t AudioTrack::createTrack(
        int streamType,
        uint32_t sampleRate,
        int format,
        int channelCount,
        int frameCount,
        uint32_t flags,
        const sp<IMemory>& sharedBuffer,
        audio_io_handle_t output)
{
    const sp<IAudioFlinger>& audioFlinger = AudioSystem::get_audio_flinger();
    sp<IAudioTrack> track = audioFlinger->createTrack(getpid(),
                                                      streamType,
                                                      sampleRate,
                                                      format,
                                                      channelCount,
                                                      frameCount,
                                                      ((uint16_t)flags) << 16,
                                                      sharedBuffer,
                                                      output,
                                                      &status);

    sp<IMemory> cblk = track->getCblk();
    if (cblk == 0) {
        LOGE("Could not get control block");
        return NO_INIT;
    }    
    mAudioTrack = track;
    mCblkMemory = cblk;
    mCblk = static_cast<audio_track_cblk_t*>(cblk->pointer());
    mCblk->out = 1;  
}


void AudioTrack::start()
{
    sp<AudioTrackThread> t = mAudioTrackThread;
    if (android_atomic_or(1, &mActive) == 0) {
        mNewPosition = mCblk->server + mUpdatePeriod;
        mCblk->bufferTimeoutMs = MAX_STARTUP_TIMEOUT_MS;
        mCblk->waitTimeMs = 0;
        if (t != 0) {
           t->run("AudioTrackThread", THREAD_PRIORITY_AUDIO_CLIENT);
        } else {
            setpriority(PRIO_PROCESS, 0, THREAD_PRIORITY_AUDIO_CLIENT);
        }

        status_t status = mAudioTrack->start();      
    }
}

-----------------------------------------------------------------------------------
M: AudioFlinger.cpp
-----------------------------------------------------------------------------------

// PlaybackThread::createTrack_l() must be called with AudioFlinger::mLock held
sp<AudioFlinger::PlaybackThread::Track> 
AudioFlinger::PlaybackThread::createTrack_l(
        const sp<AudioFlinger::Client>& client,
        int streamType,
        uint32_t sampleRate,
        int format,
        int channelCount,
        int frameCount,
        const sp<IMemory>& sharedBuffer,
        status_t *status)
{
    sp<Track> track;
    
    { // scope for mLock
        Mutex::Autolock _l(mLock);
        track = new Track(this, client, streamType, sampleRate, format,
                channelCount, frameCount, sharedBuffer);
        if (track->getCblk() == NULL || track->name() < 0) {
            lStatus = NO_MEMORY;
            goto Exit;
        }
        mTracks.add(track);
    }  
    return track;
}


status_t AudioFlinger::PlaybackThread::Track::start()
{
    sp<ThreadBase> thread = mThread.promote();
    if (thread != 0) {
       if (!isOutputTrack() && state != ACTIVE && state != RESUMING) {
            thread->mLock.unlock();
            status = AudioSystem::startOutput(thread->id(), 
(AudioSystem::stream_type)mStreamType);
            thread->mLock.lock();
        }
        if (status == NO_ERROR) {
            PlaybackThread *playbackThread = (PlaybackThread *)thread.get();
            playbackThread->addTrack_l(this);
        }
    }
    return status;
}

AudioFlinger    服务会将音频数据发送到 AudioOutput， 这部分的详细过程仍在分析中。
