// Source: https://leetcode.com/problems/goal-parser-interpretation/submissions/
class Solution {
public:
    string interpret(string command) {
        int start=0;
        string out="";
        while(start<size(command))
        {

            if(command[start]=='(')
            {

                if(command[start+1]==')')
                {
                    out+='o';
                    start =start+2;
                }

                else
                {
                    out+="al";
                    start=start+4;
                }
            }

            else
            {
                out+='G';
                start+=1;
            }


        }
        return out;

    }
};
