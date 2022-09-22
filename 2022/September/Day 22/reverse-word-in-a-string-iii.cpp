// Source : https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/
class Solution {
public:
    string reverseWords(string s) {
        string out="";
        string temp="";
        for(auto&i:s)
        {
            if(i!=' ')
            {
                temp+=i;

            }

            else
            {
                reverse(temp.begin(),temp.end());
                out+=temp+" ";
                temp ="";
            }

        }
        reverse(temp.begin(),temp.end());
        if(temp!=""){out+=temp;}
        return out;
    }
};
