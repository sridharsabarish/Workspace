// Source : https://leetcode.com/problems/decode-the-message/submissions/
class Solution {
public:
    string decodeMessage(string key, string message) {
    map<char,int> m;
    int count=1;
    for(auto&i:key)
    {
        if(isalpha(i))
        {
            if(m[i]==0)
            {

                m[i]=count++;
            }
        }
    }
    int temp=0;
    string out="";
    for(int i=0;i<size(message);i++)
    {
        if(isalpha(message[i]))
        {
            temp = m[message[i]]+96;
            out += char(temp);
        }
        else
        {
            out+=message[i];
        }
    }
        return out;
    }
};
