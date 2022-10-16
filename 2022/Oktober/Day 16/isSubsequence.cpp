// Source : https://leetcode.com/problems/is-subsequence/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        short cnt=0;
        for(int i=0;i<size(t);i++)
        {
            if(t[i]==s[cnt])
            {
                cnt++;
            }
        }
        return cnt==size(s);
    }
};
