// Source : https://leetcode.com/problems/rotate-string/submissions/
class Solution {
public:
    string shiftString(string s)
    {
        char f=s[0];
        s.erase(0,1);
        s+=f;
        return s;
    }

    bool rotateString(string s, string goal) {

        if(s==goal){return true;}
        for(int i=0;i<size(s);i++)
        {
            s=shiftString(s);
            if(s==goal){return true;}

        }
        return false;


    }
};
