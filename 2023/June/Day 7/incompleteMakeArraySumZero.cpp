// Source : INcomplete attempt
class Solution {
public:
    
    int getMin(vector<int>& nums)
    {
        
        int min=nums[0];
        for(auto&i:nums)
        {
            if(i<min)min=i;
        }
        return min;
    }
    int minimumOperations(vector<int>& nums) {
        
        int count=0;
        int min=getMin(nums);
        while(min)
        {
            
            for(int i=0;i<size(nums);i++)
            {
                if(nums[i]>0)nums[i]-=min;
                
            }
            
            count++;
        
            
            
            
        }
        
        return count;
        
        
    }
};