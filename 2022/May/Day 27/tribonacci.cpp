// Source : https://leetcode.com/problems/n-th-tribonacci-number/submissions/
class Solution {
public:
    int tribonacci(int n) {
        if(n<=1){return n;}
        if(n==2){return 1;}
        int f[n+1];
        f[0]=0;
        f[1]=f[2]=1;

        for(int i=0;i<n-2;i++)
        {
            f[i+3]= f[i+2]+f[i+1] +f[i];
        }

        return f[n];

    }
};
