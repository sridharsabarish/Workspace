// Source : https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> temp;

        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]%2==1){temp.insert(temp.end(),nums[i]);}
        }


          for(auto &i:temp)
          {nums.erase(std::remove(nums.begin(), nums.end(), i), nums.end());


          }


        for(auto&i:temp)
        {
            nums.insert(nums.end(),i);
        }

        return nums;





    }
};
