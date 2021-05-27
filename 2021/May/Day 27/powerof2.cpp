// source : https://leetcode.com/problems/the-kth-factor-of-n/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {

        double val = n;

        while(val)
        {
            if(val==2 || val==1)
            {
                return true;
            }
            val/=2;
        }
        return false;
    }
};
