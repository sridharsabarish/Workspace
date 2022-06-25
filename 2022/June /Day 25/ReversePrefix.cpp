// Source : https://leetcode.com/problems/reverse-prefix-of-word/submissions/
class Solution {
public:
    string reversePrefix(string word, char ch) {

        string pre="";
        int f=0;
        for(auto&i:word)
        {
            if(f!=1)
            {
                pre.insert(pre.begin(),i);
              if(i==ch)
                {
                f=1;
                }
            }

            else
            {
                pre.insert(pre.end(),i);

            }
        }

        if(f==0)
        {
            reverse(pre.begin(),pre.end());
        }


        return pre;

    }
};
