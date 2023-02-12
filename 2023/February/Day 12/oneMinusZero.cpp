// Source : https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/
class Solution {
public:
            
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row=size(grid);
        int col = size(grid[0]);
        vector<vector<int>> out;
        
            int t1=0;
            vector<int> rowSum;
            vector<int> colSum;
        
            for(int i=0;i<size(grid);i++)
            {
                t1=0;
                for(int j=0;j<size(grid[0]);j++)
                {
                    
                    if(grid[i][j]==1)
                    {
                        t1++;
                    }
                }
                rowSum.insert(rowSum.end(),t1);
            }
        
        
                    for(int j=0;j<size(grid[0]);j++)
            {
                t1=0;
                for(int i=0;i<size(grid);i++)
                {
                    
                    if(grid[i][j]==1)
                    {
                        t1++;
                    }
                }
                colSum.insert(colSum.end(),t1);
            }
        
   
        for(int i=0;i<size(grid);i++)
        {
            vector<int> m;
            for(int j=0;j<size(grid[0]);j++)
            {
                int temp=0;
                temp = (rowSum[i]+colSum[j])*2 - (row+col);
                m.insert(m.end(),temp);
            }
            out.insert(out.end(),m);
            
        }
                
        
        return out;
        
    
    }
};