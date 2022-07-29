// Source : https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        for(int i=0;i<size(s)/2;i++)
         {
            tmp=s[size(s)-i-1];
            s[size(s)-i-1]=s[i];
            s[i]=tmp;

         }

    }
};
