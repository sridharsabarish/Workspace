// Source : https://leetcode.com/problems/number-of-lines-to-write-string/submissions/
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {

        int lines =1;
        int buffer=0;
        vector<int>v;

        for(int i=0;i<size(s);i++)
        {
            if(buffer+widths[s[i]-97]>100)
            {
              lines++;
              buffer =0;
            }
                buffer+=widths[s[i]-97];
        }
        v.insert(v.end(),lines);
        v.insert(v.end(),buffer);

        return v;


    }
};
