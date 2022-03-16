//source : https://leetcode.com/problems/replace-all-digits-with-characters/submissions/
class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<size(s);i+=2)
        {
         s[i]=int(s[i-1])+int(s[i])-48;;
        }
        return s;
    }
};
