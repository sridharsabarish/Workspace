class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max =*std::max_element(nums.begin(), nums.end());


        for(int i=0;i<max;i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                return i;
            }
        }

        return max+1;

    }
};
