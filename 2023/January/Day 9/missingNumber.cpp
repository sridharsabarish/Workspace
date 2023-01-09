// Source : https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int VERBOSE=0;
      sort(nums.begin(),nums.end());
      if(nums[0]!=0){return 0;}
      for(int i=0;i<size(nums);i++)
      {
          if(VERBOSE)
          cout<<endl<<" Iteration "<<i<<" nums[i] = "<<nums[i];
          if(i==0)continue;
          if(VERBOSE)
          cout<<" nums[i-1] = "<<nums[i-1];
         
           if (i==size(nums)-1)
          {
              if(nums[i]!=size(nums)){return size(nums);}
          }
          
           if(nums[i]!=nums[i-1]+1)
          {
              
              return nums[i-1]+1;
          }
          
      }
        if(size(nums)==1){return 1;}
        return -1;
    }
};