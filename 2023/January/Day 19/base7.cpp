// Source : https://leetcode.com/problems/base-7/submissions/
class Solution {
public:
    string convertToBase7(int num) {
        string out="";
        int VERBOSE=0;
        if(num==0)return "0";
        int sign=1;
        if(num<0)sign=-1;
        num = abs(num);
        
        while(num)
        {
            out+=to_string(num%7);
            num/=7;
            
        }
        reverse(out.begin(),out.end());
        if(VERBOSE)
        cout<<out;
        if(sign==-1)
        {
            out="-"+out;
        }
        return (out);
    }
};