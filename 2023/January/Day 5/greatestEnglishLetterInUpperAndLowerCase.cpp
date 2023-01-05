// Source : https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case/submissions/
class Solution {
public:
    string greatestLetter(string s) {
        char greatest='?';
        string out="";
        for(auto&i:s)
        {
            if(islower(i))
                
            {
                char temp = toupper(i);
                if(std::find(s.begin(),s.end(),temp)!=s.end())
                {
                    if(int(temp)>int(greatest))
                    {
                        greatest=temp;
                    }
                    
                }
                
            }
            
        }
        
        if(greatest=='?')
        {
            return out;
        }
       
        out+=greatest;
        return out;
    }
};