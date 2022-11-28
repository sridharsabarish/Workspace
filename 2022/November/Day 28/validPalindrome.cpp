// Source : https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public:
    bool isPalindrome(string s) {
        string stripped="";
        for(auto&i:s)
        {
            if(isalnum(i))
            {
                stripped+=tolower(i);
            }

        }
        string reversed = stripped;
        reverse(reversed.begin(),reversed.end());
        return stripped==reversed;
    }
};
