# coding=utf-8

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
import time
import unicodedata
import six
import tensorflow as tf
import numpy as np
import logging



def convert_to_unicode(text):
    """Converts `text` to Unicode (if it's not already), assuming utf-8 input."""
    if six.PY3:
        if isinstance(text, str):
            return text
        elif isinstance(text, bytes):
            return text.decode("utf-8", "ignore")
        else:
            raise ValueError("Unsupported string type: %s" % (type(text)))
    elif six.PY2:
        if isinstance(text, str):
            return text.decode("utf-8", "ignore")
        elif isinstance(text, unicode):
            return text
        else:
            raise ValueError("Unsupported string type: %s" % (type(text)))
    else:
        raise ValueError("Not running on Python2 or Python 3?")

def pad(ids, max_seq_len):
    x= []
    for i in range(len(ids)):
        tids = ids[i]
        tids_len = len(tids)
        tids = tids[:min(tids_len, max_seq_len)]
        tids_a = np.array([0] * (max_seq_len - tids_len))
        tids = np.concatenate([tids,tids_a],axis=0) 
        x.append(np.array(tids))
    return np.array(x)
      
def init_logging(debugPath):
    if not os.path.exists(debugPath):
        os.mkdir(debugPath)
    debug_name = "debug_{}.txt".format(time.strftime("%Y_%m_%d"))
    #debug_name = "debug_{}.txt".format(time.strftime("%Y_%m_%d_%H_%M_%S"))
    debug_file = os.path.join(debugPath, debug_name)

    #clear
    _file = open(debug_file, 'w+')
    _file.truncate()

    logger = logging.getLogger()
    logger.setLevel(logging.DEBUG)
     
    # handler
#    con_handler = logging.StreamHandler()
#    con_handler.setLevel(logging.INFO)
#    logger.addHandler(con_handler)
     
    # output file
    file_a_handler = logging.FileHandler(debug_file, encoding='UTF-8')
    file_a_handler.setLevel(logging.DEBUG)
    logger.addHandler(file_a_handler)
    


