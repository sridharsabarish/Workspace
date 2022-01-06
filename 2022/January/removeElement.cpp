/*

Source :  https://leetcode.com/problems/remove-element/

Solution Quality : Basic. Can be improved.

*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int> test2;
        for(auto&i:nums)
        {
            if(i!=val)
            {
                test2.insert(test2.begin(),i);
            }
        }
        nums = test2;
        return size(nums);
    }
};
