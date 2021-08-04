class Solution {
public:
    bool isPalindrome(int x) {

     vector<int> v;

        if(x<0)
        {
            return false;
        }

        while(x)
        {
            v.insert(v.end(),x%10);
            x/=10;
        }

        for(int i=0;i<size(v);i++)
        {
            if(v[i]!=v[size(v)-i-1])
            {
                return false;
            }



        }
        return true;
    }

};
