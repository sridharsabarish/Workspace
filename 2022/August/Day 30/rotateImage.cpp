class Solution {
   /*
    Source : https://leetcode.com/problems/rotate-image/submissions/
    Logic : Row[i] becomes column[n-i-1]

    Solution Quality : Run time : 0 ms, memory 7.2 MB

    */
public:
    void rotate(vector<vector<int>>& matrix) {

        vector<vector<int>> copy = matrix;
        for(int i=0;i<size(matrix);i++)
        {
            vector<int> temp = matrix[i];


            // fill in column n-i-1;
            int counter=0;
            for(auto &val:temp)
            {
                copy[counter++][size(matrix)-i-1]=val;

            }
        }
        matrix = copy;
    }
};
