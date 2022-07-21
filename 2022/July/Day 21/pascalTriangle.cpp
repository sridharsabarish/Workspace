// Source : https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> b(n);
        if(n==1)    return {{1}};
        b[0] = {1};
        b[1] = {1, 1};
        for(int i=2; i<n; i++){
            b[i].resize(i+1);
            b[i][0]=1;
            for(int j=1; j<i; j++){
                b[i][j] = b[i-1][j-1] + b[i-1][j]; // Most Important part. Current Row = prev first + prev next;
            }
            b[i][i]=1;
        }
        return b;
    }
};
