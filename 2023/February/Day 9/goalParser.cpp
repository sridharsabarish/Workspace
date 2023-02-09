// Source : https://leetcode.com/problems/goal-parser-interpretation/submissions/
class Solution {
public:
    string interpret(string command) {
        string out="";
        for(int i=0;i<size(command);i++)
        {
            if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    out+="o";
                    
                }
                else
                {
                    out+="al";
                }
            }
            else if (command[i]=='G')
            {
                out+="G";
            }
            
            
        }
        return out;
    }
};