# Source : https://leetcode.com/problems/row-with-maximum-ones/submissions/993178322/
class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        maxOnes=0;
        row=-1;
        for i in range(len(mat)):
            tmp=0
            for j in range(len(mat[i])):
                if(mat[i][j]==1):
                    tmp+=1
            if(tmp>maxOnes):
                maxOnes=tmp;
                row=i;
        if(row==-1):
            return [0,0]
        return [row,maxOnes];