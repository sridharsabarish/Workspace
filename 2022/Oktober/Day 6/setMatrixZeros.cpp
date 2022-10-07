// Source : https://leetcode.com/problems/set-matrix-zeroes/
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<int> cols;
        vector<int> rows;
        for(int i=0;i<size(matrix);i++)
        {
            for(int j=0;j<size(matrix[0]);j++)
            {

                    if(matrix[i][j]==0)
                    {
                        cols.insert(cols.end(),j);
                        rows.insert(rows.end(),i);
                    }
            }
        }

        for(int i=0;i<size(matrix);i++)
        {
            for(int j=0;j<size(matrix[0]);j++)
            {
                if((std::find(cols.begin(),cols.end(),j)!=cols.end()) ||(std::find(rows.begin(),rows.end(),i)!=rows.end()))
                {
                    matrix[i][j]=0;
                }
            }
        }

    }
};
