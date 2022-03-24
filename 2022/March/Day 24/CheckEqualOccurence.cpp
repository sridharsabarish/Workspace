// Source : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mymap;

        for(auto&i:s)
        {
            mymap[i]+=1;
        }

std::vector<char> key;
for(std::map<char,int>::iterator it = mymap.begin(); it != mymap.end(); ++it)
{
  key.push_back(it->first);
}
        int c=0;

        for(auto&i:key)
        {
            if(c==0)
            {
                c=mymap[i];
            }
            else
            {
                if(mymap[i]!=c)
                {
                    return false;
                }
            }
        }
        return true;


    }
};
