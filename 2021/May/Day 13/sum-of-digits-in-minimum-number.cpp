https://leetcode.com/problems/sum-of-digits-in-the-minimum-number/submissions/

class Solution {
public:
    int sumOfDigits(vector<int>& A) {

        int min =99999;

        for(int i=0;i<size(A);i++)
        {
            if(A[i]<min)
            {
                min = A[i];
            }
        }

        int digits = 0;

        while(min)
        {
            digits+= min%10;
            min = min/10;

        }



        return digits%2==0;
    }
};
