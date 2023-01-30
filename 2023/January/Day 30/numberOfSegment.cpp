// Source : https://leetcode.com/problems/number-of-segments-in-a-string/submissions/
class Solution {
public:
    int countSegments(string s) {
        int counter=0;
        int trigger=1;
        for(int i=0;i<size(s);i++)
        {
            if(s[i]!=' ' && trigger==1)
            {
                counter++;
                trigger=0;
            }
            else if(s[i]==' ')
            {
                trigger=1;
            }
        }
        return counter;
    }
};