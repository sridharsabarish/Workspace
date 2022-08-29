// STATUS : INcomplete. NEed to check DFS.
// Something is missing.

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        vector<vector<char>> grid2 = grid;

        for(int i=0;i<size(grid);i++)
        {
            for(int j=0;j<size(grid[0]);j++)
            {

                if(i!=0)
                {

                    if(grid[i-1][j]=='1')
                    {
                        grid[i][j]='0';
                    }

                }

                if(j!=0)
                {
                    if(grid[i][j-1]=='1')
                    {
                        grid[i][j]='0';
                    }

                }

                if(i!=size(grid)-1)
                {
                    if(grid[i+1][j]=='1')
                    {
                        grid[i][j]='0';
                    }

                }

                if(j!=size(grid[0])-1)
                {
                    if(grid[i][j+1]=='1')
                    {
                        grid[i][j]='0';
                    }
                }


            }
        }

        int sum=0;
        for(int i=0;i<size(grid);i++){for(int j=0;j<size(grid[0]);j++){cout<<grid[i][j]<<" ";if(grid[i][j]=='1')sum++;}
                                     cout<<endl;}
        return sum;



    }
};
