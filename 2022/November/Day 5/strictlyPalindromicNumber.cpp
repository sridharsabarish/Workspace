// Source : https://leetcode.com/problems/strictly-palindromic-number/submissions/
class Solution {
public:
    bool genString(int n, int base)
    {
        string temp="";
        while(n)
        {
            temp+=to_string(n%base);
            n/=base;
        }
        string rev = temp;
        reverse(rev.begin(),rev.end());
        return rev!=temp;


    }

    bool isStrictlyPalindromic(int n) {

        for(int i=2;i<=n-2;i++)
        {
            if(genString(n,i))
            {
                return false;
            }
        }
        return true;

    }
};
