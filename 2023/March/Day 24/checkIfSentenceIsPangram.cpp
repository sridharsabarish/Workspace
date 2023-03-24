// Source : https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/
class Solution {
public:
    bool checkIfPangram(string sentence) {
    map<char,int> m;
    for(auto&i:sentence)
    {
        m[i]+=1;
    }
        
    return m.size()==26;
    }
};