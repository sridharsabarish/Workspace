// Source :https://leetcode.com/problems/matrix-diagonal-sum/submissions/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sums =0;
        for(int i=0;i<size(mat);i++)
        {
            for(int j=0;j<size(mat[0]);j++)
            {
                if((i==j) ||(i+j==size(mat)-1))
                {
                    sums+=mat[i][j];
                }
            }
        }
        return sums;
    }
};
