// Source : https://leetcode.com/problems/minimum-average-difference/
// Status : Incomplete 60/78 Test case, Time Limit Exceeded
class Solution {
public:

    long calcAverage(vector<int>& nums, int index)
    {

        long leftSum=0;
        long rightSum=0;
        for(int i=0;i<size(nums);i++)
        {
            if(i<=index)
            {
            leftSum+=nums[i];

            }
            else
            {
                rightSum+=nums[i];
            }
                    }


        // cout<<endl<<"Left Sum : "<<leftSum<<" Right Sum : "<<rightSum;
        // cout<<endl<<"Elem Left :"<<index+1<<" Elements Right : "<<size(nums)-(index+1);
        int rD=size(nums)-(index+1);
        if(rD==0){rD=1;}
        int out = (leftSum/(index+1)) - (rightSum/rD);
        // cout<<endl<<"Index : "<<index<<" Value : "<<out;
        // cout<<endl<<"Returning : "<<abs(out);
        return abs(out);
    }

    int minimumAverageDifference(vector<int>& nums) {


        long min=INT_MAX;
        int ind=-1;
        long temp;
        for(int i=0;i<size(nums);i++)
        {
            temp=calcAverage(nums,i);
            if(temp<min){min=temp; ind=i;}

        }
        return ind;



    }
};
