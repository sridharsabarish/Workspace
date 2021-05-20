class Solution {
public:
    int countOdds(int low, int high) {
        return low%2==1 or high%2==1?(high-low)/2 +1:(high-low)/2;
    }
};
