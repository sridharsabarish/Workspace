// Source : https://leetcode.com/problems/truncate-sentence/submissions/
class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string out ="";
        
        int spaces=0;
        
        for(auto&i:s)
        {
            if(i==' ')
            {
                spaces++;
            }
            if(spaces<k)
            {
                out+=i;
            }
            
        }
        
        return out;
        
    }
};