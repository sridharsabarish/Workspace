// Source : https://leetcode.com/problems/reverse-string/
class Solution {
public:
    void reverseString(vector<char>& s) {
       char temp;
        int l = size(s);
        for(int i=0;i<l/2;i++)
       {
            temp = s[l-i-1];
            s[l-i-1]=s[i];
            s[i]=temp;
       }
    }
};
