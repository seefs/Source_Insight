
import unittest

class UserCase(unittest.TestCase):

    def testAddUser(self):
        print("add a user")

    def testDelUser(self):
        print("delete a user")
        
    def testHideUser(self):
        print("Hide a user")

if __name__ == '__main__':
    unittest.main()


