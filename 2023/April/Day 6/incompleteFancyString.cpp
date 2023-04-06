//  Incomplete Work--------
// Source : https://leetcode.com/problems/delete-characters-to-make-fancy-string/
class Solution {
public:
    string makeFancyString(string s) {
    
    string out="";
    char prev1=' ';
    char prev2=' ';
    char prev3=' ';
    for(auto&i:s)
    {
        if(prev3==prev2==i)
        {
            continue;
        }
        else
        {
    
       
        
            out+=i;
        }
        
    }
        return out;
        
    }
};