// Source :https://leetcode.com/problems/student-attendance-record-i/submissions/
class Solution {
public:
    bool checkRecord(string s) {
        int A=0;

        for(int i=0;i<size(s);i++)
        {

            if(s[i]=='A')
            {
                A++;
                if(A>=2)
                {
                    return false;
                }
            }

            else if(s[i]=='L')
            {
                if(i>0 && i<size(s)-1)
                {
                    if(s[i+1]=='L' && s[i-1]=='L')
                    {
                        return false;
                    }
                }

            }

        }

            return true;


    }
};
