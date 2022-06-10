// Source : https://leetcode.com/problems/most-common-word/
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> m;
        string temp="";

        for(int i=0;i<size(paragraph);i++)
        {
            if(isalpha(paragraph[i]))
            {
                temp+=tolower(paragraph[i]);

            }
            else
            {

                if(size(temp)!=0)
                {
                if(std::find(banned.begin(),banned.end(),temp)==banned.end())
                {
                    //cout<<temp<<endl;
                    m[temp]+=1;
                }
                temp="";
                }
            }
        }
        if(temp!="")
        {
            m[temp]+=1;
            temp="";
        }

        int max=0;
        string s="";

        for (auto const& p : m)
        {
             if(p.second>max)
             {
                 max= p.second;
                 s=p.first;
             }

        }


        return s;
    }
};
