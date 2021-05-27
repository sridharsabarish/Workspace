// source. : https://leetcode.com/problems/rotate-string/submissions/
class Solution {
public:
    bool rotateString(string s, string goal) {

        if(size(s)!=size(goal))
        {
            return false;
        }
        if(s==goal)
        {
            return true;
        }
        for(int i=0;i<size(s);i++)
        {
            if(s==goal)
            {
                return true;
            }
            s = rotate(s);
        }

        return false;
    }

    string rotate(string s)
    {   char temp;
        temp = s[size(s)-1];
        for(int i=size(s)-1;i>0;i--)
        {
            s[i] = s[i-1];
        }
        s[0] = temp;
        return s;
    }
};
