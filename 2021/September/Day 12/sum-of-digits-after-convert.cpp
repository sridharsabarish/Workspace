// Source : https://leetcode.com/problems/sum-of-digits-of-string-after-convert/submissions/
class Solution {
public:
    int getLucky(string s, int k) {
        int val;

        int sum =0;
    for(auto &i:s)
    {
        val = int(i)-96;

        while(val)
        {
            sum+=val%10;
            val/=10;
        }
    }

        int temp;
       for(int i=1;i<k;i++)
       {
           temp =0;
           while(sum)
           {
               temp+=sum%10;
               sum/=10;

           }
           sum = temp;
       }

     return sum;
    }
};
