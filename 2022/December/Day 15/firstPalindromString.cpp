// source :https://leetcode.com/problems/find-first-palindromic-string-in-the-array/submissions/
class Solution {
public:
    bool isPalindrome(string s)
    {
        short l=size(s);
        for(int i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-i-1]){return false;}
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &i:words)
        {
            if(isPalindrome(i)){return i;}
        }
        return "";
    }
};
