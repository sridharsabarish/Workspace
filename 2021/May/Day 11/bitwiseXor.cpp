// Source : https://leetcode.com/problems/xor-operation-in-an-array/submissions/
class Solution {
public:
    int xorOperation(int n, int start) {

        int nums[n];
        int xorOut;
        for (int i =0;i<n;i++)
        {
            nums[i] =0;
            nums[i] = start + 2*i;

            if(i==0)
            {
                xorOut= nums[0];
            }
            else
            {
                xorOut = xorOut^nums[i];
            }
        }

        return xorOut;
        return -1;
    }
};
