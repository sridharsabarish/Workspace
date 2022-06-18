// Source : https://leetcode.com/problems/reverse-prefix-of-word/submissions/
class Solution {
public:
    string reversePrefix(string word, char ch) {

        string pre="";
        int f=0;
        for(int i=0;i<size(word);i++)
        {
            if(f==0)
            {
                pre+=word[i];
                if(word[i]==ch)
                {
                    reverse(pre.begin(),pre.end());
                    f=1;
                }
            }
            else
            {
                pre+=word[i];
            }

        }

        return pre;

    }
};
