

def test_sequences(self):
    """Test masking sequences with zeroes as padding"""
    # integer inputs, one per timestep, like embeddings
    layer = core.Masking()
    func = theano.function([layer.input], layer.get_output_mask())
    self.assertTrue(np.all(
        # get mask for this input
        func(np.array(
        [[[1], [2], [3], [0]],
         [[0], [4], [5], [0]]], dtype=np.int32)) ==
        # This is the expected output mask, one dimension less
        np.array([[1, 1, 1, 0], [0, 1, 1, 0]])))


