// Source : https://leetcode.com/problems/maximum-number-of-words-you-can-type/
class Solution {
public:

    int checkPossible(string t,string brokenLetters)
    {

          int f=0;
                for(auto&j:brokenLetters)
                {
                    if(std::find(t.begin(),t.end(),j)!=t.end())
                        {
                            f=1;
                        break;
                    }


                }

                return f;


    }
    int canBeTypedWords(string text, string brokenLetters) {

        string t="";
        int count =0;

        for(auto &i:text)
        {
            if(i!=' ')
            {
                t+=i;
            }
            else
            {

                if(checkPossible(t,brokenLetters)==0)
                {
                    count++;
                }
                t="";

            }

        }

        if(t!="")
        {
            if(checkPossible(t,brokenLetters)==0)
            {
                count++;
            }

        }

        return count;

    }
};
