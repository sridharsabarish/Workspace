// Source : https://leetcode.com/problems/matrix-diagonal-sum/submissions/
// Quality : Clears but can be improved
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        vector<vector<int>> v;
        for(int i=0;i<size(mat);i++)
            for(int j=0;j<size(mat[0]);j++)
            {
                vector<int> temp = {i,j};
                if(std::find(v.begin(),v.end(),temp)!=v.end())
                {
                    continue;
                }
                if((i+j==size(mat)-1) || (i==j))
                {
                    sum+=mat[i][j];
                    v.insert(v.end(),temp);
                }
            }

            return sum;



    }
};
