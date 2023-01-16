// Source : https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int> out;
        int temp;
        
        for(int i=0;i<size(operations);i++)
        {
            

            
            if (operations[i]=="C")
            {
                out.pop_back();
            }
            
            else if(operations[i]=="D")
            {
                temp = out[i-1]*2;
                out.insert(out.end(),temp);
            }
            
            else if(operations[i]=="+")
            {
                temp =out[size(out)-1]+out[size(out)-2];
                out.insert(out.end(),temp);
                
            }
            
            else 
            {
                cout<<endl<<" Operation [i] = "<<operations[i]<<endl;
                int val=0;
                int len=size(operations[i])-1;
                for(auto &l : operations[i])
                {
                    cout<<endl<<"Length "<<len<<" Val : " <<val<<"Ascii of "<<l<<" : "<<int(l)<<endl; 
                   val+=(int(l)-48)*pow(10,len);
                   len--;
                
                }
                cout<<endl<<"Length "<<len<<" Val : " <<val<<"Ascii of "<<endl; 
                
                out.insert(out.end(),val);
            }
            
            
        }
        
        int sum=0;
        
        for(auto&i:out)sum+=i;
        return sum;
     
    }
};