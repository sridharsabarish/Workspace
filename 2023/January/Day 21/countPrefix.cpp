// Source : https://leetcode.com/problems/count-prefixes-of-a-given-string/submissions/
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
    
        for(auto&word:words)
        {
            int f=0;
            
            for(int j=0;j<size(word);j++)
            {
                if(word[j]!=s[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0){count++;}
            
            
        }
        return count;
    }
};