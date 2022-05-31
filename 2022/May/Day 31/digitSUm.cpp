// Source : https://leetcode.com/problems/count-integers-with-even-digit-sum/submissions/
class Solution {
public:

    bool digitSum(int i)
    {
        int d=0;

        while(i)
        {
            d+=i%10;
            i/=10;
        }
        return d%2==0;


    }


    int countEven(int num) {

        int count=0;


        for(int i=1;i<=num;i++)
        {
            if(digitSum(i))
            {
                cout<<i<<" ";
                count++;
            }

        }
        return count;
    }
};
