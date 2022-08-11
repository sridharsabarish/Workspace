// Source : https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/
// Quality : Perfect Solution 100% faster.
class Solution {
public:
    int countOdds(int low, int high) {

        if(low%2==1 || high%2==1)
        {
            return (high-low)/2 +1;
        }
        return (high-low)/2   ;

    }
};
