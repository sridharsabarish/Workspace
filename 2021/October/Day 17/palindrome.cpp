class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){return false;}

        string s ="";
        while(x)
        {
            s+=to_string(x%10);
            x/=10;
        }

        string org =s;
        reverse(s.begin(), s.end());
        return s==org;

    }
};
