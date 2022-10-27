// Source : https://leetcode.com/problems/valid-anagram/submissions/
class Solution {
public:
    bool isAnagram(string s, string t) {
        set<char> a;
        for(auto&i:s)
        {
            a.insert(a.end(),i);

        }
        for(auto&i:t)
        {
            a.insert(a.end(),i);

        }

        for(auto&i:a)
        {
            if((std::count(s.begin(),s.end(),i))!=(std::count(t.begin(),t.end(),i)))
            {
                return false;
            }
        }
        return true;
    }
};
