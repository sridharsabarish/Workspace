// Source: https://leetcode.com/problems/count-common-words-with-one-occurrence/
class Solution {
public:
    
    vector<string> populateSingleOccurence(vector<string>& words)
    {
        vector<string> singleWords;
        for(auto&i:words)
        {
            if(std::count(words.begin(),words.end(),i)==1)
            {
                singleWords.insert(singleWords.end(),i);
            }
            
        }
        return singleWords;
    }
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        
        vector<string> singleWords1,singleWords2;
        singleWords1=populateSingleOccurence(words1);
        singleWords2=populateSingleOccurence(words2);
        
        for(auto&i:singleWords1)
        {
            if(std::find(singleWords2.begin(),singleWords2.end(),i)!=singleWords2.end())
            {
                count++;
            }
        }
        return count;
    }
};