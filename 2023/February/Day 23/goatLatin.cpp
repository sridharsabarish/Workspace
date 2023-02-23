// Source : https://leetcode.com/problems/goat-latin/submissions/
class Solution {
public:
    
    
    vector<string> getWords(string sentence)
    {
        vector<string> out;
        string temp="";
        for(auto&i:sentence)
        {
            if(i!=' ')
            {
                temp+=i;
            }
            else
            {
                out.insert(out.end(),temp);
                temp="";
            }
        }
        out.insert(out.end(),temp);
        return out;
    }
    
    
    bool beginVowel(string sentence)
    {
        char check = tolower(sentence[0]);
        switch(check)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                
                return true;
            
        }
        return false;
    }
    
    string toGoatLatin(string sentence) 
    {
        string out="";
       
        vector<string> words = getWords(sentence);
        for(int i=0;i<size(words);i++)
        {
          
            
        if(beginVowel(words[i]))
        {
            out+=words[i];
            out+="ma";
            
        }
        else
        {
            for(int j=1;j<size(words[i]);j++)
                out+=words[i][j];
            out+=words[i][0];
            out+="ma";
        }
            
            
        for(int l=0;l<=i;l++)
        {
            out+="a";
        }
           
        
        if(i!=size(words)-1)out+=" ";
            
            
        }
        
        
        
        return out;
    }
};