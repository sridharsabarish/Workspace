// Source : https://leetcode.com/problems/ransom-note/submissions/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        map<char,int> r;
        for(auto&i:magazine){m[i]+=1;}
        for(auto&i:ransomNote){r[i]+=1;
                              if(r[i]>m[i]){return false;}}
        return true;

    }
};
