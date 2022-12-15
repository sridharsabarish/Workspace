// source :https://leetcode.com/problems/find-first-palindromic-string-in-the-array/submissions/
class Solution {
public:
    bool isPalindrome(string s)
    {
        string copy =s;
        reverse(s.begin(),s.end());
        return s==copy;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto &i:words)
        {
            if(isPalindrome(i)){return i;}
        }
        return "";
    }
};
