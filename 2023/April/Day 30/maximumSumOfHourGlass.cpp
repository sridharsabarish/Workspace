/*
// Source : https://leetcode.com/problems/maximum-sum-of-an-hourglass/
status : // Logic works but time limit seems to be exceeded.
We need some form of window to multiply and do the hour glass quantification.

mask = [[1,1,1],[0,1,0],[1,1,1]];



// Need to figure out how to apply multiplication or convolution for getting the hour glass.




// Action Points :

* Learn how convolution works. Focus a bit more on Making the code more efficient.

*/





class Solution {
public:
    
    
    int calcRes(vector<vector<int>> grid,int start_i,int end_i,int start_j,int end_j)
    {
       
        int mask[] = {1,1,1,0,1,0,1,1,1};
        int counter=0;
        int res=0;
        //cout<<start_i<<" : "<<end_i<<endl;
        //cout<<start_j<<" : "<<end_j<<endl;
        for(int i=start_i;i<end_i;i++)
            for(int j=start_j;j<end_j;j++)
            {
               res+=grid[i][j]*mask[counter++];
                
            }
        
        //cout<<"Result of hour glass : "<<res<<endl;
        return res;
        
    }
    
    int maxSum(vector<vector<int>>& grid) {
        int max=0;
        int ret=0;
        
        for(int i=0;i+3<=size(grid);i++)
        {
            for(int j=0;j+3<=size(grid[0]);j++)
            {
                ret=calcRes(grid,i,i+3,j,j+3);
                max=max>ret?max:ret;
            }
        }
        return max;
        
    }
};