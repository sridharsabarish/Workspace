class Solution {
public:
    string removeOccurrences(string s, string part) {
    int flag=1;
        string temp="";
        while(flag)
        {flag=0;
         
         for(int i=0;i<size(s)-size(part);i++)
         {
             string t2="";
             for(int j=0;j<size(part);j++)
             {
                 t2+=s[i+j];
             }
             cout<<"i : "<<i<<" Part : "<<t2<<endl;
             
             if(t2==part)
             {
                 flag=1;
                 cout<<"\n Match  at " <<i <<": Skipping to "<<i+size(part)-1<<endl;
                 i+=size(part)-1;
                 
                 continue;
                 
             }
             else
             {
                 temp+=s[i];
             }
             
         }
         
         s=temp;
            
            
        }
        
        return s;
    }
};