// Source : https://leetcode.com/problems/sorting-the-sentence/submissions/
class Solution {
public:
    string sortSentence(string s) {
        
        map<int,string> m;
        int count=0;
        string tmp="";
        for(auto&i:s)
        {
            if(i==' ')
            {
                continue;
            }
            else
            {
                if(isdigit(i))
                {
                    //cout<<"found"<<i<<" Temp : " <<tmp<<endl;
                    m[int(i)-48]=tmp;
                    count++;
                    tmp="";
                }
                else
                {
                    tmp+=i;
                    
                }
                
            }
            
        }
        
        string out="";
        for(int i=1;i<=count;i++)
        {
            //cout<<" I : "<<i<<" m[i] : "<<m[i]<<endl;
            out+=m[i];
            
            if(i!=count)
            {
                out+=' ';
            }
        }
        return out;
        
        
    }
};