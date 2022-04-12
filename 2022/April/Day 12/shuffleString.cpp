// Source : https://leetcode.com/problems/shuffle-string/submissions/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map <int,char> m;

        for(int i=0;i<size(s);i++)
        {
            m[indices[i]]=s[i];
        }

        string out="";
        for(int i=0;i<size(s);i++)
        {
            out+=m[i];
        }
        return out;
    }
};
