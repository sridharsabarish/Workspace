//source : https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        if (std::count(nums.begin(), nums.end(), original))
            return findFinalValue(nums,original*2);
        return original;
    }
};
