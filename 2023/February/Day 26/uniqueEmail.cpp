// Source : https://leetcode.com/problems/unique-email-addresses/submissions/
class Solution {
public:
    
    
    string ProcessEmail(string email)
    {
        int d=0;
        int p=0;
        
        string tmp="";
        for(auto&i:email)
        {
            
             if(i=='@')
                {
                
                 d=1;   
                }
            
            if(p==1 && d==0)
            {
               continue;
                
            }
            
            if(p==0 && d==0)
            {
                if(i=='.')
                {
                    continue;
                }
                else if(i=='+')
                {
                    p=1;
                    continue;
                }
                else
                {
                    tmp+=i;
                }
            }
            
            if(d==1)
            {
                tmp+=i;
            }
            
        }
        
        cout<<tmp<<endl;
        return tmp;
        
        
    }
    
    
    int numUniqueEmails(vector<string>& emails) {
        
        string temp;
        set<string> out;
        
        for(auto&email:emails)
        {
            temp = ProcessEmail(email);
            out.insert(out.end(),temp);
        }
        
        return out.size();
        
        
    }
};