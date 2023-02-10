// Source : https://leetcode.com/problems/count-the-digits-that-divide-a-number/submissions/
class Solution {
public:
    int countDigits(int num) {
    
        int count=0;
        int copy=num;
        while(copy)
        {
            if(num%(copy%10)==0)
            {
                count++;
            }
            copy/=10;
            
        }
        return count;
    }
};