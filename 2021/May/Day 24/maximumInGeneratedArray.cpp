// Source : https://leetcode.com/problems/get-maximum-in-generated-array/submissions/
class Solution {
public:
    int getMaximumGenerated(int n) {


        if(n==0)
        {
            return 0;
        }
        if(n<=2)
        {
            return 1;
        }
        int nums[n+1];
        nums[0]=0;
        nums[1]=1;
        int max = 0;
        for(int i=2;i<n+1;i++)
        {
            if(i%2==0)
            {
                nums[i]= nums[i/2];
            }
            else
            {
                nums[i] = nums[i/2] + nums[(i+1)/2];
            }

            cout<<"nums["<<i<<"] = "<<nums[i];
            max = nums[i]>max?nums[i]:max;
        }


    return max;
    }

};
