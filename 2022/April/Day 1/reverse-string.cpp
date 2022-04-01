//source:https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        for(int i=0;i<size(s)/2;i++)
        {
            temp = s[i];
            s[i]=s[size(s)-i-1];
            s[size(s)-i-1] = temp;
        }
    }
};
