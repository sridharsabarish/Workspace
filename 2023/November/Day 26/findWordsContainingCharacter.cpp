// Source : https://leetcode.com/problems/find-words-containing-character/
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> correctIndices;
        for(int i=0;i<words.size();i++)
        {
            for(auto&j:words[i])
            {
                if(j==x)
                {
                    correctIndices.insert(correctIndices.end(),i);
                    break;
                }
            }
        }
        return correctIndices;
    }
};