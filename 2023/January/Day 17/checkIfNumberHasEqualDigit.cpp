// Source : https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/submissions/
class Solution {
public:
    bool digitCount(string num) {
        int c=0;
        int VERBOSE=0;
        for(int i=0;i<size(num);i++)
        {
            c=std::count(num.begin(),num.end(),char(i+48));
            if(VERBOSE)
            cout<<endl<<"C : "<<c<<"  nums["<<i<<"]"<<num[i];
            if(c!=int(num[i])-48)
            {
                return false;
            }
            
            
        }
        return true;
        
        
    }
};