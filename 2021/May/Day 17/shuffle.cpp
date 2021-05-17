class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        int l = size(nums);
        for(int i=0;i<l/2;i++)
        {
            a.insert(a.end(),nums[i]);
            a.insert(a.end(),nums[n+i]);
        }
        return a;
    }
};
