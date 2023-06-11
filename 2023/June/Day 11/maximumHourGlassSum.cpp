/*

Source : https://leetcode.com/problems/maximum-sum-of-an-hourglass/submissions/
Hour glass is matrix with following
3x3

0,0 0,1  02,
    1,1,
2,0, 2,1,2,2
*/

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int maxHourGlass=0;
        int temp=0;
        for(int i=0;i+2<size(grid);i++)
        {
            for(int j=0;j+2<size(grid[0]);j++)
            {  temp=0;
                temp+=grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1] + grid [i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
                //cout<<temp<<" "<<endl;
                if(temp>maxHourGlass)maxHourGlass=temp;
            }
        }
        return maxHourGlass;
    }
};