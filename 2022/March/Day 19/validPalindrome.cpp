//source : https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public:
    bool isPalindrome(string s) {
        string stripped ="";
        for(auto&i:s)
        {
            if(isalnum(i))
            {
                stripped+=tolower(i);
            }
        }
        s = stripped;
        reverse(s.begin(),s.end());
        return s==stripped;
    }
};
