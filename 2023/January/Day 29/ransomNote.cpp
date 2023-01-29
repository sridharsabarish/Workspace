// Source : https://leetcode.com/problems/ransom-note/submissions/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
        map<char,int> m;
        for(auto&i:magazine)
        m[i]+=1;
        
        for(auto&i:ransomNote)
        {
            if(std::count(ransomNote.begin(),ransomNote.end(),i)>m[i])
            {
                return false;
            }
        }
        return true;
    }
};