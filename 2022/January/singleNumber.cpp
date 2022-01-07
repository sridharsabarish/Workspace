/* Author : Sabarish Sridhar
    Problem source : https://leetcode.com/problems/single-number
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        for(int i=0;i<size(nums)-1;i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
    return nums[size(nums)-1];
    }

};
