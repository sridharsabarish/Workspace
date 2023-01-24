// Source : https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/
// Potential Upgrade : Save these in a list so as to quickly refer instead of finding all time.
class Solution {
public:
    
    
    int findMinRow(vector<vector<int>>& matrix,int i,int j)
    {
        int min=INT_MAX;
        for(int j=0;j<size(matrix[0]);j++)
        {
            if(matrix[i][j]<min)min=matrix[i][j];
        }
        return min;
        
    }
    
    
        int findMaxCol(vector<vector<int>>& matrix,int i,int j)
    {
        int max=0;
        for(int i=0;i<size(matrix);i++)
        {
            if(matrix[i][j]>max)max=matrix[i][j];
        }
        return max;
        
    }
    
    
    
    
    
    
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       
        vector<int> out;
        for(int i=0;i<size(matrix);i++)
        {
            for(int j=0;j<size(matrix[0]);j++)
            {
                
                
                if(findMinRow(matrix,i,j) == findMaxCol(matrix,i,j))
                {
                    out.insert(out.end(),matrix[i][j]);
                }
                
            }
        }
        return out;
        
        
    }
};