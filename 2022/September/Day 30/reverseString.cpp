//Source : https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {

        char tmp;
        for(int i=0;i<size(s)/2;i++)
        {
            tmp=s[size(s)-1-i];
            s[size(s)-1-i]=s[i];
            s[i]=tmp;

        }

    }
};
