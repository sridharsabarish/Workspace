// Source : https://leetcode.com/problems/number-of-lines-to-write-string/submissions/
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> results{1,0};
        for(auto &c:s)
        {
            results[1]+=widths[int(c)-97];
            if(results[1]>100)
            {

                results[0]+=1;
                results[1] = widths[int(c)-97];
            }
        }
        return results;
    }
};
