// Source : https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int imin=0;
        int jmin=0;
        int count=0;
        for(int i=imin;i<size(grid);i++)
        {
            jmin=0;
            for(int j=jmin;j<size(grid[0]);j++)
            {
                if(grid[i][j]<0)
                {
                    count++;
                    imin=i;
                    jmin=j;
                }
            }
        }
        return count;
    }
};