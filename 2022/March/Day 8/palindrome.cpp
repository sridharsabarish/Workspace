class Solution {
public:
    bool isPalindrome(int x) {

        string s = "";
        while(x)
        {
            s+=to_string(x%10);
            x/=10;
        }
        cout<<s;
        for(int i=0;i<size(s)/2;i++)
        {
            if(s[i]!=s[size(s)-1-i])
            {
                return false;
            }
        }
        return true;

    }
};
