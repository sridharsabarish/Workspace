// Source : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<size(grid);i++)
        {
            for(int j=0;j<size(grid[0]);j++)
            {
                if(grid[i][j]<0)
                {
                    count+=size(grid[0])-j;
                    break;
                }
            }
        }
        return count;
    }
};
