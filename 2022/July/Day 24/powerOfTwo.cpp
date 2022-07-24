// Source : https://leetcode.com/problems/power-of-two/
// Recursion Method
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==1){return n;}
        if((n!=1) && (n%2==1))
        {return false;}
        else
        {
            n/=2;
            return isPowerOfTwo(n);
        }
    }
};
