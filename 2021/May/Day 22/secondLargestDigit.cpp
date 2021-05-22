// Source  : https://leetcode.com/problems/second-largest-digit-in-a-string/submissions/
class Solution {
public:
    int secondHighest(string s) {
        int max =-1;
        int secondmax=-1;

        for(auto &i:s)
        {
            if(!isalpha(i) and isdigit(i))
            {
                int val = (int)i - 48;
               if(val>max)
               {
                   secondmax = max;
                   max = val;
               }

                else if(val>secondmax and val!=max)
                {
                    secondmax = val;
                }


            }
        }

    return secondmax;
    }
};
