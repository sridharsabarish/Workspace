// Source : https://leetcode.com/problems/power-of-two/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){return false;}
        if(n==1){return true;}

        while(n)
        {
            if(n!=1 && n%2==1)
            {
                return false;
            }
            n/=2;
        }
        return true;
    }
};
