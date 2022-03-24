// Source : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum =0;
        for(int i=0;i<size(arr);i++)
        {
            for(int j=0;j<size(arr);j++)
            {
                if((i+j)%2==0)
                {
                    for(int k=i;k<=j;k++)
                    {
                        sum+=arr[k];
                    }
                }
            }
        }
        return sum;
    }
};
