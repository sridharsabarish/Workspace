class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> smallerNum;
        int count =0;
        for(int i=0;i<size(nums);i++)
        {
            count =0;
            for(int j=0;j<size(nums);j++)
            {
                if(nums[j]<nums[i])
                {
                    count+=1;
                }
            }
            smallerNum.insert(smallerNum.end(),count);
        }
        return smallerNum;
    }
};
