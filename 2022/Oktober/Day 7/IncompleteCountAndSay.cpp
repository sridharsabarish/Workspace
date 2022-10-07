// Status : stuck/incomplete need to do it again
class Solution {
public:
    string countAndSay(int n) {
        string temp="1";
        map<int,string> m2;
        m2[1]="1";
        for(int i=2;i<=n;i++)
        {
            // GO through previous eleemnt in map; check number of occurence and then based on that fix thisl

            string temp=m2[i-1];
            string t="";
            for(int j=1;j<=9;j++)
            {
                int c=0;
                for(auto&h:temp)
                {
                    if(h==char(j+48))
                    {
                        c++;

                    }

                }
                cout<<"Current var : "<<i<<" Occ :"<<c<<endl;
                if(c)
                {
                    t+=to_string(c)+char(j+48);

                }

            }
            m2[i]=t;



        }
        return m2[n];

    }
};
