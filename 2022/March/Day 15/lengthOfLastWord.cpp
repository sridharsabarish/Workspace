//source : https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {

        string word ="";
        int len = size(s);

        for(int i=0;i<len-1;i++)
        {
            if(s[i]!=' ')
            {
                word+=s[i];
            }
            else if(s[i]==' ' && s[i+1]!=' ')
            {
                word = "";
            }
        }
        if(s[len-1]!=' '){word+=s[len-1];}
        return size(word);
    }
};
