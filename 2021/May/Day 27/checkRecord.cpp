//source : https://leetcode.com/problems/student-attendance-record-i/submissions/
class Solution {
public:
    bool checkRecord(string s) {

        int a,l,maxl;
        a=l=0;
        maxl=0;
        char prev;
        int f=-1;
        for(auto &c:s)
        {

            if(f==-1)
            {
                f=1;
                if(c=='A'){a++;}
                if(c=='L'){l++;}
            }
            else
            {
                if(prev=='L' and c=='L')
                {
                    l++;
                    maxl = l>maxl?l:maxl;
                }
                else
                {
                    if(c=='L')
                    {
                        l=1;
                    }
                }

                if(c=='A'){a++;}
            }
            prev = c;
        }


        if(maxl<3 and a<2){return true;} return false;
    }
};
