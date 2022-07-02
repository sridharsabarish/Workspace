
// Source : https://leetcode.com/problems/valid-parentheses/submissions/
class Solution {
public:
    bool isValid(string s) {
        vector<char> v;

        vector<char> c={')','}',']'};
        map<char,char> m;
        m[')']='(';
        m['}']='{';
        m[']']='[';

        for(auto&i:s)
        {

            if(std::find(c.begin(),c.end(),i)!=c.end())
            {
                if(size(v)==0){return false;}
                if(v[size(v)-1]!=m[i])
                {
                    return false;
                }
                v.pop_back();

            }

            else
            {
                v.insert(v.end(),i);
            }
        }


        if(size(v)!=0){return false;}
        return true;
    }
};
