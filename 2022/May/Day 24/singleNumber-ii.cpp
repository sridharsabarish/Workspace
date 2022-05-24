// Source : https://leetcode.com/problems/single-number-ii/submissions/
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int start=0;
        sort(nums.begin(),nums.end());
        for(int start=0;start<size(nums);start++)
        {


            if(std::count(nums.begin(),nums.end(),nums[start])!=3){return nums[start];}
        }
        return -1;

    }
};
