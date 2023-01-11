// Source : https://leetcode.com/problems/check-if-matrix-is-x-matrix/
class Solution {
public:
    bool checkDiagonals(vector<vector<int>>& grid)
    {
        
        for(int i=0;i<size(grid);i++)
        {
            if((grid[i][i]==0) || (grid[i][size(grid)-i-1]==0))
            {
                return true;
            }
        }
        return false;
    }
    
    
    
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        if(checkDiagonals(grid))
        {
            return false;
        }
        
        else
        {
            for(int i=0;i<size(grid);i++)
            {
                for(int j=0;j<size(grid);j++)
                {
                    
                    if((i==j) || (i+j==size(grid)-1)){continue;}
                    if(grid[i][j]!=0){return false;}
                    
                }
            }
            
            
            
        }
        return true;
    
    
    }
};