// Source : https://leetcode.com/problems/number-of-senior-citizens/submissions/
//0-9 (inclusive) Phone number
//10 Gender
// 11-12 Age
//13-14 Seat



class Solution {
public:
    
    
    bool checkAge(string passenger)
    {
        int out=0;
        
        
        out+=(int(passenger[11])-48)*10+int(passenger[12])-48;
        if(out>60)
            return true;
        return false;
        
    }
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto&p:details)
        {
            if(checkAge(p))
            {
                count++;
            }
            
        }
        return count;
        
    }
};