// Source : https://leetcode.com/problems/find-the-difference/submissions/
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<size(t);i++)
        {
            if(std::count(t.begin(),t.end(),t[i])!=std::count(s.begin(),s.end(),t[i]))
            {
                return t[i];
            }
        }
        return t[0];
    }
};
