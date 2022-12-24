// Source : https://leetcode.com/problems/first-letter-to-appear-twice/
class Solution {
public:
    char repeatedCharacter(string s) {
       map<char,int> m;

        for(auto&i:s)
        {
            if(m[i]==1)
            {
                return i;
            }
            m[i]+=1;
        }
        return 'a';
    }
};
