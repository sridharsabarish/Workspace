// Source :https://leetcode.com/problems/isomorphic-strings/submissions/
class Solution {
public:
    bool isIsomorphic(string s, string t) {

    map <char,char> m;
    map <char,char>m2;

    if(size(s)!=size(t)){return false;}

    for(int i=0;i<size(s);i++)
    {
        m[s[i]]=t[i];
        m2[t[i]]=s[i];
    }
        for(int i=0;i<size(s);i++)
        {
            if(t[i]!=m[s[i]]){return false;}
            if(s[i]!=m2[t[i]]){return false;}
        }

        return true;
    }


};
