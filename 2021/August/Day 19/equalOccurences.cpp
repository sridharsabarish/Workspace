// Source : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/submissions/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int l = size(s);
        vector<char> c;
        for(auto &i:s)
        {
            if(std::find(c.begin(),c.end(),i)==c.end())
            {
                c.insert(c.end(),i);
            }
        }

        if(l%size(c)!=0){return false;}
        int min = l/size(c);


        for(auto &i:s)
        {
            if(std::count(s.begin(),s.end(),i)!=min)
            {

                return false;
            }
        }

        return true;
    }
};
