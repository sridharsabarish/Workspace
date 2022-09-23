// Source : https://leetcode.com/problems/is-subsequence/submissions/
// Efficient Code - Two pointer method
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int counter=0;
        int counter2=0;

        while(counter<size(s) && counter2<size(t))
        {

            if(s[counter]==t[counter2])
            {
                counter++;

            }
            counter2++;

        }

        if(counter==size(s)){return true;}return false;



    }
};
