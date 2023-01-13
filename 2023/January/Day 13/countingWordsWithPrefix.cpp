// Source : https://leetcode.com/problems/counting-words-with-a-given-prefix/submissions/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
     
        int count=0;
        int f=0;
        for(auto&j:words)
        {
            f=0;
            for(int i=0;i<size(pref);i++)
            {
                if(pref[i]!=j[i])
                {
                    f=1;break;
                }
            }
            if(f==0){count++;}
            
        }
        return count;
    }
};