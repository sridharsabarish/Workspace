// source : https://leetcode.com/problems/special-positions-in-a-binary-matrix/submissions/
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int count =0;

        vector<int> rs(size(mat),0);
        vector<int> cs(size(mat[0]),0);
        int sum1,sum2;
        sum1=sum2=0;
        for(int i=0;i<size(mat);i++)
        {
            for(int j=0;j<size(mat[0]);j++)
            {
                rs[i] = rs[i]+mat[i][j];
                cs[j] = cs[j] + mat[i][j];
            }
        }

        for(int i=0;i<size(mat);i++)
        {
            for(int j=0;j<size(mat[0]);j++)
            {
                if(mat[i][j]==1)
                {
                    if((rs[i]==1) && (cs[j]==1)){count+=1;}
                }
            }
        }

        return count;

    }

};
