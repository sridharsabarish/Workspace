// Source : https://leetcode.com/problems/to-lower-case/submissions/
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<size(s);i++)
        {
            if(isalpha(s[i]) && int(s[i]<97))
            {
                s[i]=char(int(s[i])+32);
            }

        }
        return s;
    }
};
