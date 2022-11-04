// Source : https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
// Daily challenge
class Solution {
public:
        bool isVowel(char c)
    {
        switch(c)
        {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                return true;
            default:
                return false;

        }

    }
    string reverseVowels(string s) {


    string vowels="";
        for(auto&i:s)
        {
            if(isVowel(tolower(i)))
                {
                    vowels+=i;
                }

        }

        reverse(vowels.begin(),vowels.end());

        string out="";
        int counter=0;
        for(auto&i:s)
        {
            if(!isVowel(tolower(i)))
            {
                out+=i;


            }
            else
            {
                out+=vowels[counter++];
            }

        }

        return out;


    }
};
