// Source : https://leetcode.com/problems/reverse-words-in-a-string-iii/
class Solution {
public:
    string reverseWords(string s) {

        string out ="";
        string w2R = "";

        for(int i=0;i<size(s);i++)
        {

            if(s[i]==' ')
            {
                reverse(w2R.begin(),w2R.end());
                out+=w2R+" ";
                w2R="";
            }
            else
            {
                w2R+=s[i];
            }
        }
        if(w2R!="")
        {
            reverse(w2R.begin(),w2R.end());
            out+=w2R;
            w2R="";
                     }

        return out;
    }
};
