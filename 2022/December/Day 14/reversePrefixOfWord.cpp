//Source : https://leetcode.com/problems/reverse-prefix-of-word/submissions/
class Solution {
public:
    string reversePrefix(string word, char ch) {

    int f=0;
    string pre="";
    for(int i=0;i<size(word);i++)
    {
        pre+=word[i];
        if(ch==word[i] && f==0)
        {
            f=1;
            reverse(pre.begin(),pre.end());

        }

    }

        return pre;
    }
};
