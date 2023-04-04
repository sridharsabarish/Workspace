// Source : https://leetcode.com/problems/count-the-number-of-consistent-strings/submissions/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int f=1;
        int count=0;
        for(auto&word:words)
        {
            f=1;
            for(auto&i:word)
            {
                if(std::find(allowed.begin(),allowed.end(),i)==allowed.end())
                {
                    f=0; break;
                }
            }
            count+=f;
        }
        return count;
    }
};