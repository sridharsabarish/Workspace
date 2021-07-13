# Source : https://leetcode.com/problems/find-a-peak-element-ii/submissions/
class Solution(object):
    def findPeakGrid(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[int]
        """

        for i in range(len(mat)):
            for j in range(len(mat[0])):
                f=0;

                if(i!=0 and mat[i][j]<mat[i-1][j]):

                    f=1;
                    continue
                if(i!=len(mat)-1 and mat[i][j]<mat[i+1][j]):

                    f=1
                    continue
                if(j!=0 and mat[i][j]<mat[i][j-1] ):

                    f=1;
                    continue
                if(j!=len(mat[0])-1 and mat[i][j]<mat[i][j+1]):

                    f=1
                    continue
                if(f==0):
                    return [i,j]

                    
