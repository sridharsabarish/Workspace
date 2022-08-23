// Source : https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/submissions/
class Solution {
public:


    string modifyString(string s) {


        for(int i=0;i<size(s);i++)
        {

            vector<char> banned = {};
            if(s[i]=='?')
            {

                if(i!=size(s)-1)
                {
                    if(isalpha(s[i+1]))
                    {
                        banned.insert(banned.end(),s[i+1]);

                    }


                }
                 if (i!=0)
                {
                    if(isalpha(s[i-1]))
                    {
                        banned.insert(banned.end(),s[i-1]);
                    }


                }




            for(int j=97;j<123;j++)
            {
                if(std::find(banned.begin(),banned.end(),j)==banned.end())
                {
                    s[i]=j;
                    break;
                }

            }




            }



        }
        return s;



    }
};
