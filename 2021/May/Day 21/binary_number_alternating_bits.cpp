// Source :https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/
class Solution {
public:
    bool hasAlternatingBits(int n) {

        int f=1;
        int prev=-1;
        int dig;
        while(n)
        {
            dig = n%2;
            if(prev==-1)
            {
            }
            else
            {
                if(prev==dig)
                {
                    return false;
                }

            }

            prev = dig;
            n/=2;

        }
        return true;
    }
};
