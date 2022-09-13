// Source : https://leetcode.com/problems/decode-the-message/submissions/
class Solution {
public:
    string decodeMessage(string key, string message) {

    string tmp="";
    for(auto &i:key){
        if(i!=' ')

    {
        if(std::find(tmp.begin(),tmp.end(),i)==tmp.end())
        {
            tmp+=i;
        }
    }
    }
    key=tmp;

    map <char,char> m;
    string val="abcdefghijklmnopqrstuvwxyz";


    //cout<<size(key)<<" "<<size(val);
    for(int i=0;i<size(key);i++)
    {
        m[key[i]]=val[i];
    }

    string out="";
    m[' ']=' ';
    for(auto&i:message)
    {

        out+=m[i];
    }
        return out;

    }
};
