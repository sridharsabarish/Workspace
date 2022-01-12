/* Source : https://leetcode.com/problems/base-7/submissions/*/
class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){return "0";}
       string val = "";
       string prefix = "";
        if(num<0){prefix="-";}
        num = abs(num);
        while(num)
        {
            val+=to_string(num%7);
            num/=7;

        }
        reverse(val.begin(),val.end());
        return prefix+val;
    }
};
