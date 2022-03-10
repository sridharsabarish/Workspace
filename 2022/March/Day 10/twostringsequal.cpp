// source : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        return fill(word1)==fill(word2);
    }

    string fill(vector<string>&word)
    {
        string s ="";
        for(auto&i:word)s+=i;
        return s;
    }
};
