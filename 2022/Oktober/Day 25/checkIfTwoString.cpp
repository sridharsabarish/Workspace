// Source : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1="";
        string t2="";
        for(auto&i:word1)
        {
            t1+=i;
        }
                for(auto&i:word2)
        {
            t2+=i;
        }
        return t1==t2;
    }
};
