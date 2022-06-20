// Source : https://leetcode.com/problems/is-subsequence/submissions/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(size(s)==0){return true;}
        if(size(t)<size(s)){return false;}
        int counter=0;
        int i=0;
            while(counter<size(t) && i<size(s))
            {
                if(t[counter]==s[i])
                {
                    if(i==size(s)-1){return true;}
                    i++;
                }
                counter++;
            }
        return false;


    }
};
