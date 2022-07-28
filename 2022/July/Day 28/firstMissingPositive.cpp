// Source : https://leetcode.com/problems/first-missing-positive/submissions/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=-1;
        int last=-1;
       int max=0;

        for(int i=0;i<size(nums);i++)
        {
            max=nums[i]>max?nums[i]:max;
            if(nums[i]>0 && start==-1)
            {
                start=nums[i];
                if(start!=1){return 1;}
            }
            else
            {
                if(nums[i]>0)
                {

                    last=start;
                    start=nums[i];

                    if(start!=last+1 && start!=last){

                        return last+1;}

                }

            }

        }
        if(max==0){return 1;}

        return start+1;

    }
};
