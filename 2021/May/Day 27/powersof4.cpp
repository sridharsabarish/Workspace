class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        {
            return true;
        }

        double val =n;
        while(val)
        {
            if(val==4)
            {
                return true;
            }
             val/=4;
        }
        return false;
    }
};
