# Source : https://leetcode.com/problems/find-smallest-common-element-in-all-rows/submissions/
class Solution(object):
    def smallestCommonElement(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        small = float('inf')
        n_rows = len(mat)

        for elem in list(mat[0][:]):

            f=0;
            for i in range(n_rows):
                if(not elem in mat[i][:]):
                    f=1;
                    break
            if(f==0):
                if(elem<small):
                    small = elem
        if(small==float('inf')):
            return -1
        return small
