// Source : https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public:
    bool isPalindrome(string s) {

        string n = "";
        for(auto &i:s)
        {
            if(isalpha(i))
            {
                n+=tolower(i);
            }
            else if(isdigit(i))
            {
                n+=i;
            }
        }

        for(int i=0;i<size(n)/2;i++)
        {
            if(n[i]!=n[size(n)-1-i])
            {
                return false;
            }
        }

        cout<<n;
        return true;
    }
};
