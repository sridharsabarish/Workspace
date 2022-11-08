// Source : https://leetcode.com/problems/make-the-string-great/submissions/
class Solution {
public:
    string makeGood(string s) {
        string temp;
        int count=0;
        int f=1;
        while(f==1 && size(s)!=0)
        {
            f=0;
            temp="";
            int i=0;
            while(i<size(s))
            {
                if(s[i]!=s[i+1] && tolower(s[i])==tolower(s[i+1]))
                {
                    f=1;
                    i+=2;
                }
                else
                {
                    temp+=s[i];
                    i+=1;
                }


            }

            s=temp;



        }

        return s;

    }
};
