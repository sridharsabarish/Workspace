// Source : https://leetcode.com/problems/divisor-game/submissions/
class Solution {
public:
    bool divisorGame(int n) {
       
        int count=0;
        while(n>1)
        {
            if(n%2==0)
            {
                n-=1;
                 count++;
            }
            else
            {
               for(int j=n-2;j>0;j-=2)
               {
                   if(n%j==0)
                   {
                       n-=j;
                        count++;
                   }
               }
            }
           
            
        }
        
        if(count%2==0){return false;}
        return true;
        
    }
};