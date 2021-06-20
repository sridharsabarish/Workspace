// source : https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/submissions/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

        vector<vector<int>> vec(m, vector<int> (n, 0));

        for(auto &ind:indices)
        {
            for(int i=0;i<n;i++)
            {
                vec[ind[0]][i]+=1;
            }

            for(int i=0;i<m;i++)
            {
                vec[i][ind[1]]+=1;
            }
        }

        int count =0;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(vec[i][j]%2==1)
                {
                    count+=1;
                }
            }
        return count;
    }
};
