// Source : https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/submissions/
class Solution {
public:

    int getInt(string word)
        {
            int k=0;

        for(int i=0;i<size(word);i++)
        {
          k+=pow(10,size(word)-i-1)*(int(word[i])-97);
        }
          return k;
        }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return getInt(firstWord)+getInt(secondWord)==getInt(targetWord);


    }
};
