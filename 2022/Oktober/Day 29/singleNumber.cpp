// Source :  https://leetcode.com/problems/single-number/submissions/
// Better  solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        if(size(nums)==1){return nums[0];}
        if(nums[0]!=nums[1]){return nums[0];}
        if(nums[size(nums)-1]!=nums[size(nums)-2]){return nums[size(nums)-1];}

        for(int i=1;i<size(nums)-1;i++)
        {

            if((nums[i]!=nums[i-1]) && (nums[i]!=nums[i+1]))
            {
                return nums[i];
            }

        }
        return -1;
    }
};





// Source :  https://leetcode.com/problems/single-number/submissions/
// Lazy solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        for(auto&i:nums)
        {
            if(std::count(nums.begin(),nums.end(),i)==1){return i;}

        }
        return -1;
    }
};
