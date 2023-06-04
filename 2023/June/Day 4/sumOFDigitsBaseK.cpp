// Source : https://leetcode.com/problems/sum-of-digits-in-base-k/submissions/
class Solution {
public:
    int sumBase(int n, int k) {
        
        int sum=0;
        while(n)
        {
            
            sum+=n%k;
            n/=k;
        }
        return sum;
    }
};