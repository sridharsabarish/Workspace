// Source : https://leetcode.com/problems/reverse-words-in-a-string/submissions/
class Solution {
public:
    string reverseWords(string s) {

        vector<string> v;
        string temp="";
        for(auto&i:s)
        {
            if(i!=' ')
            {
                temp+=i;
            }
            else
            {
                if(size(temp))
                {
                    v.insert(v.end(),temp);
                }
                temp ="";
            }
        }

        if(size(temp))
        {
            v.insert(v.end(),temp);
        }

        reverse(v.begin(),v.end());
        s="";
        for(int i=0;i<size(v);i++)
        {
            s+=v[i];
            if(i!=size(v)-1)
            {
                s+=" ";
            }

        }
        return s;

    }
};
