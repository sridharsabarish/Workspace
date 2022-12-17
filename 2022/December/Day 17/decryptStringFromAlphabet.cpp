// Source : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/
class Solution {
public:


    string freqAlphabets(string s) {
        int VERBOSE=0;
        int i=0;

        int temp;
        string out="";

        while(i<size(s))
        {
        if(isdigit(s[i]))
        {
            if((i+1<size(s)) && (isdigit(s[i+1])) && s[i+2]=='#')
            {

                       temp = int(s[i]-48)*10 + int(s[i+1]-48);
                       if(VERBOSE)
                       {
                            cout<<endl<<s[i]<<":"<<int(s[i]);
                            cout<<endl<<s[i+1]<<":"<<int(s[i+1]);
                            cout<<endl<<"Temp"<<" : "<<temp;
                            cout<<endl<<int('a');
                       }


                        i+=3;
            }
            else
            {
               temp = int(s[i]-48);
                i+=1;
            }

            out+=char(temp+96);

        }
        }

        return out;
    }
};
