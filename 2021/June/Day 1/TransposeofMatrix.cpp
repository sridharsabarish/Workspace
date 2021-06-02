class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int column = size(matrix[0]);
        int row = size(matrix);
        vector<vector<int>> v(column, vector<int> (row, 0));

        for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
        {
            v[j][i]=matrix[i][j];
        }

        return v;
    }
};
