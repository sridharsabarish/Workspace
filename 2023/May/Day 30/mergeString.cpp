// Source : https://leetcode.com/problems/merge-strings-alternately/submissions/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string out="";
        int counter=0;
        while(counter<size(word1) || counter<size(word2))
        {
            if(counter<size(word1))
                out+=word1[counter];
            if(counter<size(word2))
                out+=word2[counter];
            counter++;
            
        }
        return out;
    }
};