// Source : https://leetcode.com/problems/reverse-integer/submissions/
// Good Solution with Error Handling.

class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x)
        {
            
            try {
                   if (rev>INT_MAX/10 || rev<INT_MIN/10)  
                       throw overflow_error("error");
                    
                    rev = rev*10 + x%10;
                    x/=10;
                
            } catch (exception& e) {return 0; }
        }
        
        
        return rev;
    }
};