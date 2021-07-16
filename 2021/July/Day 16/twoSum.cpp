class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int>::iterator it;
        vector<int> out;
        for(int i=0;i<size(nums);i++)
        {
            it = std::find(nums.begin()+i+1,nums.end(),target-nums[i]);

            if(it!= nums.end())
            {

                out.insert(out.end(),i);
                out.insert(out.end(),it - nums.begin());
                return out;
            }
            cout<<i;

        }
        return out;
    }
};
