// SOurce : https://leetcode.com/problems/removing-stars-from-a-string/
// Time limit exceeded
class Solution {
public:
    string removeStars(string s) {
        while(std::find(s.begin(),s.end(),'*')!=s.end())
        {
            string tmp="";
            for(int i=0;i<size(s);i++)
            {
                if(s[i+1]!='*')
                {
                    tmp+=s[i];
                    
                }
                else
                {
        
                    tmp+=s.substr(i+2,size(s));
                    break;
                }
                
                
            }
            //cout<<" tmp is "<<tmp<<endl;
            s=tmp;

            
        }
        
        return s;
    }
};