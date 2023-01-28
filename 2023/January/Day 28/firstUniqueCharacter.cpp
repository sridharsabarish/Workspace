// Source :  https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
class Solution {
public:
    int firstUniqChar(string s) {

        map<char,int> m;
        for(auto&i:s)
        {
            m[i]+=1;
        }
        for(int i=0;i<size(s);i++)
        {
            if(m[s[i]]==1){return i;}
        }
        return -1;
    }
};