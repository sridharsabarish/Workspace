// Source : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/
class Solution {
public:
    string freqAlphabets(string s) {
        int val;
        string out="";
        int i=0;
       while(i<size(s) )
        {

            if( (i<size(s)-2) && (s[i+2]=='#'))
            {
                val=stoi(s.substr(i,2));



            if(val>9)
            {
                out+=char(val+96);

            }

                i+=3;

            }

            else
            {
                out+=char(s[i]+48);
                i++;
            }
        }


        return out;

    }
};
