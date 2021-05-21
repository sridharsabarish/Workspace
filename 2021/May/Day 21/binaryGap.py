# Source : https://leetcode.com/problems/binary-gap/submissions/
class Solution {
public:
    int binaryGap(int n) {
        int f=-1;
        int max,count;
        int prev;
        max=count=0;
        while(n)
        {


            if(n%2==1)
            {

                if(f!=-1)
                {
                    count+=1;
                }

                if(f==-1)
                {
                    f=1;
                }
                max = max>count?max:count;
                count =0;
            }

            if(n%2==0)
            {
                if(f==1)
                {
                    count+=1;
                }
            }

            prev = n%2;

            n/=2;

        }
        return max;

    }
};
