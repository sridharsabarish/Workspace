//source : https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int f=-1;
        for(int i=size(s)-1;i>=0;i--)
        {
            if(f==-1 && s[i]!=' ')
            {
              f=i;
            }
            else if(f!=-1 && s[i]==' ')
            {
                return f-i;
            }
        }
        return f+1;
    }
};
