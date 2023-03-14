/*

Source : https://leetcode.com/problems/partition-array-according-to-given-pivot/
Objective : Element < pivot appear before every element greater than pivot
            Element = pivot, in between.
            Reltaive order is mainted.


*/


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        
        vector<int> out;
        
        int count_pivot=std::count(nums.begin(),nums.end(),pivot);
        for(auto&i:nums)
        {
            if(i<pivot)
            {
                out.insert(out.end(),i);
            }
            
        }
        for(int i=0;i<count_pivot;i++)out.insert(out.end(),pivot);
        
        for(auto&i:nums)
        {
            
            if(i>pivot)
            {
                out.insert(out.end(),i);
            }
            
        }
        return out;
    }
};