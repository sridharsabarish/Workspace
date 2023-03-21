// Source : https://leetcode.com/problems/count-asterisks/submissions/
class Solution {
public:
    int countAsterisks(string s) {
        
        int asterix=0;
        int barCount=0;
        
        for(auto&i:s)
        {
            if(i=='|')
            {
                barCount+=1;
            }
            if(barCount%2==0)
            {
                if(i=='*')
                {
                    asterix++;
                }
            }
        }
        
        return asterix;
    }
};