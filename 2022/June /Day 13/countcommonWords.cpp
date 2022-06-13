// Source : https://leetcode.com/problems/count-common-words-with-one-occurrence/submissions/
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {

        int count =0;

        for(auto &i:words1)
        {
            if(std::find(words2.begin(),words2.end(),i)!=words2.end() && std::count(words1.begin(),words1.end(),i)==1 && std::count(words2.begin(),words2.end(),i)==1)
            {
                count++;
            }

        }
        return count;
    }
};
