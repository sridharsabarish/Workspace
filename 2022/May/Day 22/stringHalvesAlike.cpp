// Source : https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/
class Solution {
public:

    int countVowel(string s)
    {
        int count=0;
        vector<char> vowels ={'a','e','i','o','u'};
        for(auto&i:s)
        {
            i=tolower(i);
            if(std::find(vowels.begin(),vowels.end(),i)!=vowels.end())
            {
                count++;
            }


        }

        return count;

    }
    bool halvesAreAlike(string s) {

        return countVowel(s.substr(0,size(s)/2))==countVowel(s.substr(size(s)/2,size(s)));

    }
};
