// Source : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/submissions/
class Solution {
public:
    bool checkString(string s) {
       int f=0;
    for(auto&i:s)
    {
        if(i=='b')f=1;
        if(f==1 && i=='a')return false;
    }
        return true;
    }
};