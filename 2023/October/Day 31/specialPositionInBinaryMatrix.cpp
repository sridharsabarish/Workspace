https://leetcode.com/problems/special-positions-in-a-binary-matrix/submissions/

class Solution {
public:



    int checkRow(vector<vector<int>>& mat,int i, int j)
    {
        for(int k=0;k<mat[0].size();k++)
        {
            if(k==j)continue;
            if(mat[i][k]!=0)
            {
                return false;
            }
        }
        return true;

    }
    int checkCol(vector<vector<int>>& mat,int i, int j)
    {
        for(int k=0;k<mat.size();k++)
        {
            if(k==i)continue;
            if(mat[k][j]!=0)
            {
                return false;
            }
        }
        return true;

    }

    int numSpecial(vector<vector<int>>& mat) {
        int num_special=0;


        for(int i=0;i<mat.size();i++)
        for(int j=0;j<mat[0].size();j++)
        {

        if(mat[i][j]==1)
        if(checkRow(mat,i,j) && checkCol(mat,i,j))
        {
            num_special+=1;
        }

        else
        {
            continue;
        }

        }

        return num_special;
        
    }
};