// Source : https://leetcode.com/problems/set-mismatch/submissions/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int val= NULL;
        int missing=NULL;
        for(int i=1;i<=size(nums);i++)
        {

            if(missing==NULL && std::find(nums.begin(),nums.end(),i)==nums.end())
            {
               missing=i;

            }

            if(val==NULL && std::count(nums.begin(),nums.end(),nums[i-1])>1)
            {
               val=nums[i-1];
            }
        }
        return {val,missing};
    }
};
