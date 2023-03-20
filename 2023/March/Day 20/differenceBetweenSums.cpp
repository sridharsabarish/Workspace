// Source : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/submissions/
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int digit_sum=0;
        int element_sum=0;
        for(auto&i:nums)
        {
            element_sum+=i;
            
            while(i)
            {
                digit_sum+=i%10;
                i/=10;
            }
            
        }
        
        return abs(element_sum - digit_sum);
        
    }
};