//Source:https://leetcode.com/problems/find-triangular-sum-of-an-array/submissions/
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int VERBOSE=0;
        while(size(nums)>1)
        {
            vector<int> out;    
            for(int i=0;i<size(nums)-1;i++)
            {
                int sum=(nums[i]+nums[i+1])%10;
                out.insert(out.end(),sum);
                if(VERBOSE)
                cout<<"adding "<<sum<<" to array"<<endl;
                sum=0;
            }
            nums=out;
        }
        
        return nums[0];
        
        
    }
};