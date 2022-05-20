// Source : https://leetcode.com/problems/number-of-segments-in-a-string/submissions/
class Solution {
public:
    int countSegments(string s) {
        vector<string> v;
        string tmp="";
        int count=0;
        for(auto&i:s)
        {
            if(i==' ')
            {
                if(tmp!="")
                {
                count++;
                }
                tmp="";

            }

            else
            {
                tmp+=i;
            }
        }

        if(tmp!="")
        {
            count++;
        }
        return count;
    }
};
