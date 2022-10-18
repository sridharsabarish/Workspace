// Incomplete / In Progress;
// Source : https://leetcode.com/problems/count-and-say/
class Solution {
public:
    string countAndSay(int n) {
        map<int,string> m;
        m[1]="1";
        for(int i=2;i<=n;i++)
        {
            // Find number of occurence of each digit and then add it to the string.
            int occurence[10];
            string start = m[i-1];
            // Populate occurences
            map<char,int> m2;
            for(auto&j:start)
            {
                m2[j]+=1;
            }


            // Generate the final string
            string out ="";
            for( char k='9';k>='1';k--)
            {
                if(m2[k])
                {
                    cout<<k<<":"<<m2[k]<<endl;
                    out+=string(m[k])+k;
                }

            }

            m[i]=out;
            cout<<"m["<<i<<"] :"<<m[i]<<endl;

        }
        return m[n];
    }
};
