// Source : https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/submissions/
class Solution {
public:
    
    bool handleVowel(string s)
    {
        int len = size(s)-1;
        if((isVowel(s[0])) && isVowel(s[len]))
        {
            return true;
        }
        return false;
        
    }
    
    bool isVowel(char c)
    {
        c=tolower(c);
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
                break;
            default:
                break;
        }
        return false;
        
        
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            if(handleVowel(words[i]))
            {
                count++;
            }
        
            
        }
        return count;
    }
};