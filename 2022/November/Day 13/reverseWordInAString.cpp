// Source : https://leetcode.com/problems/reverse-words-in-a-string/submissions/
class Solution {
public:
    string reverseWords(string s) {

        vector<string> words;
        string temp="";
        for(auto&i:s)
        {
            if(isalnum(i))
            {
                temp+=i;
            }
            else
            {
                if(temp!="")
                {
                    words.insert(words.end(),temp);

                }
                temp = "";

            }

        }

        if(temp!="")
        {
            words.insert(words.end(),temp);
        }


        string out="";
        for(int i=size(words)-1;i>=0;i--)
        {
            out+=words[i];
            if(i!=0)
            {
                out+=" ";
            }
        }

        return out;
    }
};
