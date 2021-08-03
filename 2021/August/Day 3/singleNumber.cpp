class Solution {
public:
    int singleNumber(vector<int>& nums) {

        if(size(nums)==1)
        {
            return nums[0];
        }

        std::sort(nums.begin(), nums.end());
        for(int i=0;i<size(nums);i++)
        {
            if(i==0)
            {
                if(nums[i]!=nums[i+1])
                {
                    return nums[i];
                }
            }
            else if(i==size(nums)-1)
            {
                if(nums[i]!=nums[i-1])
                {
                    return nums[i];
                }

            }
            else
            {
                if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1])
                {
                    return nums[i];
                }
            }
        }
        return -1;
    }
};
