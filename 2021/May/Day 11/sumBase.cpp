// Source : https://leetcode.com/problems/sum-of-digits-in-base-k/submissions/
class Solution {
public:

    int sumBase(int n, int k) {

        int sums =0;
            while(n)
            {
                sums +=(n%k);
                n = n/k;
            }
    return sums;
    }
};
