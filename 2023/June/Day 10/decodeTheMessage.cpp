/*

 Source : https://leetcode.com/problems/decode-the-message/submissions/



*/

class Solution {
public:
 
    string stripSpace(string generic)
    {
        string out="";
        for(auto&i:generic)
        {
            if(isalpha(i))
                out+=i;
        }
        return out;
    }
    
    map<char,char> generateMap(string key)
    {
        map<char,char> m;
        char start='a';
        
        for(auto&i:key)
        {
            if(!isalpha(m[i]))
            {
                m[i]=start++;
            }
            
        }
        return m;
    }
    
    string decodeMessage(string key, string message) {
        
        key=stripSpace(key);
        map<char,char> m = generateMap(key);
        string out="";
        for(auto&i:message)
        {
            if(isalpha(i))
            {
                out+=m[i];
            }
            else
                out+=i;
        }
        
        return out;
    }
};