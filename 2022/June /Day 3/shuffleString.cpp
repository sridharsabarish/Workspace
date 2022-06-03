// Source : https://leetcode.com/problems/shuffle-string/submissions/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;

        for(int i =0;i<size(indices);i++)
        {
            m[indices[i]]=s[i];

        }

        s="";
        for(int i=0;i<size(indices);i++)
        {
            s+=m[i];
        }
        return s;
    }
};
