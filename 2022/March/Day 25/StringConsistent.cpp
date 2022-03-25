// Source : https://leetcode.com/problems/count-the-number-of-consistent-strings/submissions/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;

        for(auto&i:words)
        {
            count++;  // Assume it is consistent.
            for(auto&j:i)
            {
                if(std::find(allowed.begin(), allowed.end(), j) == allowed.end())
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};
