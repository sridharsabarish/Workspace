// Source: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        
        for(auto&sentence:sentences)
        {int count=0;
         
         for(auto&i:sentence)
         {
             if(i==' ')
             {
                 count++;
             }
         }
         if(count>max)max=count;
            
        }
        return max+1;
        
    }
};