// Source :https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int f=1;
        int d=0;
        while(n)
        {
            d=n%10;
            s+=d;
            f*=d;
            n=n/10;
        }
        return f-s;
    }
};
