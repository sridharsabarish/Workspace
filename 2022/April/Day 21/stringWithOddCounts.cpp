// Source : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/
class Solution {
public:
    string generateTheString(int n) {

        string s= "";
        if(n%2==0)
        {
            // Two strings suffice

            for(int i=0;i<n-1;i++){s+="a";}
            s+="b";
        }

        else
        {
            //Three strings
            for(int i=0;i<n-2;i++){s+="a";}
            if(n-1)
            {
                s+="b";
            }
            s+="c";


        }
        return s;
    }
};
