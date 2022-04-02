// Source : https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(size(sentence)<26){return false;}
        map<char,int> m;
        for(auto &i:sentence)
        {
            m[i]+=1;
        }

        return size(m)==26;
    }
};
