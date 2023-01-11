// Source : https://leetcode.com/problems/circular-sentence/submissions/
class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        int f=0; 
        int VERBOSE=0;
    
        for(int i=0;i<size(sentence);i++)
        {
         
            if(sentence[i]==' ')
            {
                f=1;
                if(VERBOSE)
                cout<<endl<<"s[i-1] : "<<sentence[i-1]<<"  s[i+1] : "<<sentence[i+1];
                if(sentence[i-1]!=sentence[i+1])
                {
                    return false;
                }
                
            }
        }
       
            
            if(sentence[0]!=sentence[size(sentence)-1])return false;
            
            
        
        return true;
        
        
    }
};