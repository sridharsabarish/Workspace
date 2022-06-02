// Source : https://leetcode.com/problems/transpose-matrix/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> out;
        for(int i=0;i<size(matrix[0]);i++)
        {
              vector<int> temp;
            for(int j=0;j<size(matrix);j++)
            {
                temp.insert(temp.end(),matrix[j][i]);
            }
            out.insert(out.end(),temp);
        }
        return out;
    }
};
