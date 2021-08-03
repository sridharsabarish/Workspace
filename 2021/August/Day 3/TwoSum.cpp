class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> out;

        for(int i=0;i<size(nums);i++)
        {

            auto it = std::find(nums.begin(),nums.end(),target-nums[i]);
            if(it!=nums.end())
            {
                int index = it - nums.begin();

                if(index!=i)
                {out.insert(out.end(),i);
                out.insert(out.end(),index);
                 return out;
                }
            }
        }
        return out;
    }
};
