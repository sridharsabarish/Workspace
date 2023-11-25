/*
Source : https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/
Logic : Check only lower case, if ascii > prev, check for upper otherwise continue.

*/

class Solution {
public:
    string greatestLetter(string s) {

        int defaultAsciiValue=96; // Before a
        int i=0;
        while(i<s.size())
        {
            if(int(s[i])>defaultAsciiValue)
            {
                char temp = toupper(s[i]);
                if(std::find(s.begin(),s.end(),temp)!=s.end())
                {
                    defaultAsciiValue=int(s[i]);
                }
            }
            i++;
        }
        if(defaultAsciiValue==96)return "";
        char temp=char(defaultAsciiValue);
        temp = toupper(temp);
        string out="";
        out+=temp;
        return out;

        
    }
};