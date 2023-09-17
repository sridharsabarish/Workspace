'''

Flip and Inverse Matrix

Approach: We can do this in place. On observing carefully, it can be deduced that in each row in the final matrix,
the i-th value from the left is equal to the inverse of the i-th value from the right of the input binary matrix. 
Thus, we use (Column + 1) / 2 (with floor division) to iterate over all indexes i      
in the first half of the row, including the centre and updating the answer accordingly.

'''


def flip_and_inverse(mat):
    for row in mat:
        for i in range((len(row) + 1) // 2):
            row[i] = row[len(row)-1-i] ^1
            row[len(row)-1-i]=row[i] ^1
    return mat


# mat =[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]

# print(flip_and_inverse(mat))


import unittest
class TestStringMethods(unittest.TestCase):
        def test_flip_and_inverse_1(self):
            mat =[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
            expectedOut=[[1, 1, 0, 0], [0, 1, 0, 1], [0, 0, 1, 1], [1, 0, 1, 0]]
            self.assertEqual(flip_and_inverse(mat), expectedOut)
            
        # def test_flip_and_inverse_2(self):
        #     mat = [[1, 1, 0], [1, 0, 1], [0, 0, 0]]
        #     expectedOut=[[1,0,0],[0,1,0],[1,1,1]]
        #     self.assertEqual(flip_and_inverse(mat), expectedOut)
            
        def test_flip_and_inverse_3(self):
            mat =[[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
            expectedOut=[[1, 1, 0, 0], [0, 1, 0, 1], [0, 0, 1, 1], [1, 0, 1, 0]]
            self.assertEqual(flip_and_inverse(mat), expectedOut)

if __name__ == '__main__':
    unittest.main()
        