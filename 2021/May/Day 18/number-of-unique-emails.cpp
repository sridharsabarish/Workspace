// Source :https://leetcode.com/problems/unique-email-addresses/submissions/
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string s;
        int at=0;
        int plus=0;

        unordered_set<string> ss;
        for(auto &i:emails)
        {
            s ="";
            at =plus=0;
            for(int j=0;j<size(i);j++)
            {

                if(not at and not plus)
                {
                    if(i[j]=='.')
                    {

                    }
                    else if(i[j]=='+')
                    {
                        plus=1;
                    }

                    else if(i[j]=='@')
                    {
                        at=1;
                        s+=i[j];
                    }

                    else
                    {
                        s+=i[j];
                    }

                }


                else if(plus and not at)
                {
                    if(i[j]=='@')
                    {
                        at=1;
                        s+=i[j];
                    }
                }


                else
                {
                    s+=i[j];
                }




            }
               ss.insert(s);
            cout<<s;
        }


        return size(ss);





    }
};
