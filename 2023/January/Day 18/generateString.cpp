// Source : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/
class Solution {
public:
    string generateTheString(int n) {
        string out="";
        if(n%2==0)
        {
            for(int i=0;i<n-1;i++)
            {
                out+="a";
            }
            
            out+="b";
        }
        else
        {
            for(int i=0;i<n-2;i++)
            {
                out+="a";
            }
            
            if(n>1)
            out+="b";
            out+="c";
            
        
        }
        
        return out;
    }
};