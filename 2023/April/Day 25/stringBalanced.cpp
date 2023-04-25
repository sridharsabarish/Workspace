// Source : https://leetcode.com/problems/split-a-string-in-balanced-strings/submissions/
class Solution {
public:
    bool isBalanced(string s)
    {
        return std::count(s.begin(),s.end(),'R')==std::count(s.begin(),s.end(),'L');
    }
    int balancedStringSplit(string s) {
        
        int count=0;
        string tmp="";
        for(int i=0;i<size(s);i+=2)
        {
           tmp+=s[i];
           tmp+=s[i+1];
            
            if(isBalanced(tmp))
            {
                count+=1;
                tmp="";
            }
        
        }
        return count;
    
    }
};