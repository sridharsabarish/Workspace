// Source : https://leetcode.com/problems/matrix-diagonal-sum/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<size(mat[0]);i++)
        {
            sum+=mat[i][i];

            if(i!=size(mat[0])-i-1)
            {
            sum+=mat[i][size(mat[0])-i-1];
            }
        }
        return sum;
    }
};
