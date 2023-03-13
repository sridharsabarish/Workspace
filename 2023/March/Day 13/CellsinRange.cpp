// Source : https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/submissions/
class Solution {
public:
    vector<string> cellsInRange(string s) {
        
//      char sa=s[0];
//      char sb=s[3];
//      int s1=std::stoi(s[1]);
//      int s2=std::stoi(s[4]);
        
    int VERBOSE=0;
    vector<string> out;
    
    for(char i=s[0];i<=s[3];i++)
    {
        for(char j=s[1];j<=s[4];j++)
        {
            if(VERBOSE)
            cout<<"i : "<<i<<" j : "<<j<<endl;
            string temp="";
            temp+=i;
            temp+=j;
            out.insert(out.end(),temp);
            
        }
        
    }
        return out;
        
        
    }
};