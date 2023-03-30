// Source : https://leetcode.com/problems/count-pairs-of-similar-strings/submissions/
// Solution Quality, passeable not good.
class Solution {
public:
    
    string getUnique(string input)
    {
        vector<char> v;
        for(auto &i:input)
        {
            if(std::find(v.begin(),v.end(),i)==v.end())
            {
                v.insert(v.end(),i);
                
            }
        }
        sort(v.begin(),v.end());
        string out ="";
        for(auto &i:v)out+=i;
        return out;
        
        
    }
    int similarPairs(vector<string>& words) {

        
        int count=0;
        
        
        for(int i=0;i<size(words);i++)
        {
            for(int j=i+1;j<size(words);j++)
            {
                
                if(getUnique(words[i])==getUnique(words[j]))
                {
                    count++;
                }
                
            }
        }
        
        return count;
    }
};