// Source : https://leetcode.com/problems/reverse-only-letters/submissions/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string rev="";
        for(auto&i:s)
        {
            if(isalpha(i)){rev+=i;}
        }

        reverse(rev.begin(),rev.end());
        int counter=0;
        for(int i=0;i<size(s);i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=rev[counter++];
            }

        }
        return s;
    }
};
