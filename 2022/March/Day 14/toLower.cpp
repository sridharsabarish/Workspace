// Source : https://leetcode.com/problems/to-lower-case/submissions/
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<size(s);i++)
        {
            int temp = int(s[i]);
            if(temp>=65 && temp<=90 )
            {
                s[i]= char(temp+32);
            }
        }
        return s;
    }
};
