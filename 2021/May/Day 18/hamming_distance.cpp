// Source:https://leetcode.com/problems/number-of-1-bits/submissions/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n)
            {
                count= n%2==1?count+1:count;
            n/=2;
            }
    return count;
    }
};
