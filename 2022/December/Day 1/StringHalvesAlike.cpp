// Source : https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/
class Solution {
public:
    bool isVowel(char c)
    {
        c=tolower(c);
        vector<char> vowels={'a','e','i','o','u'};
        if(std::find(vowels.begin(),vowels.end(),c)!=vowels.end())
        {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {

        int countLower=0;
        int countUpper=0;
        for(int i=0;i<size(s);i++)
        {
            if(isVowel(s[i]))
            {
                if(i<size(s)/2)
                {
                    countLower++;
                }
                else
                {
                    countUpper++;
                }
            }

        }
        return countLower==countUpper;

    }
};
