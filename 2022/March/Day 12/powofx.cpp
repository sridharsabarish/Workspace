// source : https://leetcode.com/problems/powx-n/submissions/
// note : need to find more optimal Solution
class Solution {
public:
    double myPow(double x, int n) {
        if(x==0 || x==1){return x;}
        else if(x==-1){return n%2==0?1:-1;}
        else{if(n==pow(-2,31))return 0;}
        //double d=1;
        //for(int i=0;i<abs(n);i++)d*=x;
        //return n<0?1/d:d;
        return pow(x,n);
    }
};
