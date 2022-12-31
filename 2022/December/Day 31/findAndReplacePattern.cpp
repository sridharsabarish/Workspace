// Source : https://leetcode.com/problems/find-and-replace-pattern/submissions/
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
       vector<string> out;
       vector<char> visited;
        
        
        
        
       int VERBOSE=1;
        
        for(auto&i:words)
        {
             map<char,char> m;
            if(VERBOSE)
            cout<<"---------------"<<endl<<"Word is "<<i<<endl;
            string reconstruct="";
            for(int j=0;j<size(pattern);j++)
            {
                if(isalpha(m[pattern[j]]))
                {
                    reconstruct+=m[pattern[j]];
                }
                else
                {
                    int f=0;
                    for(auto&v:visited)
                    {
                        if(m[v]==i[j])
                        {   
                            if(VERBOSE)
                            cout<<" Cannot map :"<<v<<" To "<<i[j]<<endl;
                            f=1;
                            break;
                        }
                    }
                    if(f==1){continue;}
                    if(VERBOSE)
                    cout<<" Mapping "<<pattern[j]<<" To "<<i[j]<<endl;
                    m[pattern[j]]=i[j];
                    
                    reconstruct+=m[pattern[j]];
                    visited.insert(visited.end(),pattern[j]);
                }
            }
            if(VERBOSE)
            cout<<"I : "<<i<<" Reconstruct : "<<reconstruct<<endl;
            if(i==reconstruct)
            {
                out.insert(out.end(),i);
            }
            
        }
        
        return out;
        
    }
};