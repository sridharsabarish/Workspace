// Source. :https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
// Sliding Window Problem, Solution Quality : GOOD
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int res=0;

        int l=0;
        for(int r=0;r<size(s);r++)
        {
            while(std::find(charSet.begin(),charSet.end(),s[r])!=charSet.end())
            {

                charSet.erase(s[l]);

                l+=1;
            }

            charSet.insert(s[r]);
            res= r-l+1>res?r-l+1:res;
        }

        return res;
    }
};
