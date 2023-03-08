// Source : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/
class Solution {
public:
    
 
    int strStr(string haystack, string needle) {
    
    if(needle==haystack){return 0;}
    if(size(needle)>size(haystack)){return -1;}
        
    
    int size_needle=size(needle);
        
    for(int i=0;i<size(haystack)-size(needle)+1;i++)
    {
        string temp="";
        for(int j=0;j<size(needle);j++)
        {
            temp+=haystack[i+j];
        }
        if(temp==needle)
        {
            return i;
        }
        
    }
        return -1;
    }
};