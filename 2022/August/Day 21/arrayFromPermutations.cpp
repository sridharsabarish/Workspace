/**
Source : https://leetcode.com/problems/build-array-from-permutation/submissions/
Quality :  GOOD
Run time 80.75% faster, Memeory 18.35% lesser than most.
**/
class Solution {
public:
   vector<int> buildArray(vector<int>& nums) {

       vector<int> v;
       for(int i=0;i<size(nums);i++)
       {
          v.insert(v.begin()+i,nums[nums[i]]);
       }
       return v;


   }
};
