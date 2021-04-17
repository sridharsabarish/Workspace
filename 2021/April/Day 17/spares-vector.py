#Source : https://leetcode.com/problems/dot-product-of-two-sparse-vectors/submissions/


class SparseVector:
    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.val = nums


    def get_item(self):
        return self.val

    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec):
        """
        :type vec: 'SparseVector'
        :rtype: int
        """
        sums = 0;

        val = self.get_item()
        vecs = vec.get_item()
        for i in range(len(val)):
            sums+= vecs[i]*val[i]
        return sums


# Your SparseVector object will be instantiated and called as such:
# v1 = SparseVector(nums1)
# v2 = SparseVector(nums2)
# ans = v1.dotProduct(v2)
