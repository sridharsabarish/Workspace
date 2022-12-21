// Source : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/submissions/
class Solution {
public:
    bool areOccurrencesEqual(string s) {

     set<char> c;
        map<char,int> m;
        for(auto&i:s)
        {
            m[i]+=1;
            c.insert(i);
        }
        int val=-1;

        for(auto&i:c)
        {
            if(val==-1)
            {
                val = m[i];
            }
            else
            {
                if(m[i]!=val)
                {
                    return false;
                }
            }
        }

        return true;
    }
};
