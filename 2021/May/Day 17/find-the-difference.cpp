// Source :https://leetcode.com/problems/find-the-difference/submissions/
class Solution {
public:
    char findTheDifference(string s, string t) {

        for(auto &j:t)

        {
         if(std::count(s.begin(),s.end(),j)!=std::count(t.begin(),t.end(),j))
         {
             return j;
         }
        }

        return '-';

    }
};
