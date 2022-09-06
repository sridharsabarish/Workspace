/*
Status : incomplete
Source. :https://leetcode.com/problems/word-pattern/
Error : Run time error

Needs work.

*/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string> v;
        string tmp="";
        for(auto &i:s)
        {
            if(i!=' ')
            {
                tmp+=i;
            }

            else
            {
                if(tmp!="")
                {
                    v.insert(v.end(),tmp);
                    tmp="";
                }

            }

        }

        v.insert(v.end(),tmp);
                    tmp="";


        map<char,string> m;
        map<string,char> m1;
        vector<char> visited;
        vector<string> visited1;

        for(int i=0;i<size(pattern);i++)
        {
           if(std::find(visited.begin(),visited.end(),pattern[i])!=visited.end())
           {

               if(m[pattern[i]]!=v[i])
               {
                   return false;
               }
           }


            if(std::find(visited1.begin(),visited1.end(),v[i])!=visited1.end())
           {

               if(m1[v[i]]!=pattern[i])
               {
                   return false;
               }
           }



            m[pattern[i]]=v[i];
            m1[v[i]] = pattern[i];
            visited.insert(visited.begin(),pattern[i]);
            visited1.insert(visited1.begin(),visited1[i]);

        }
        return true;


    }
};
