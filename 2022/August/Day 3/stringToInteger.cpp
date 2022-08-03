// Source : https://leetcode.com/problems/string-to-integer-atoi/submissions/
class Solution {
public:
    int myAtoi(string s) {
        string tmp="";
        int stop=0;
        int p=0;
        int n=0;
        int d=0;
        for(auto&i:s)
        {
            if(i=='.'){break;}
            if(p==1 || n==1){if(!isdigit(i)){break;}}
            if(isalpha(i))
            {
                stop=1;
                break;
            }

            if(d==1){if(i==' ')break;}

            if(isdigit(i))
            {
                cout<<" :" <<i;
                d=1;
                tmp+=i;
            }

            if(d==1)
            {
                if(i=='+' || i=='-')
                {
                    stop=1;
                    break;
                }
            }

            else
            {
                if(i=='+')
                {
                    if(n==0){p=1;}
                    else{stop=1;break;}

                }
                else if(i=='-')
                {
                    if(p==0){n=1;}
                    else{stop=1;break;}
                }
            }



        }
        cout<<endl;
        if(n==1){cout<<"-";}
        cout<<tmp<<endl;


        if(size(tmp)==0){return 0;}

         double out=0;
        for(int i=0;i<size(tmp);i++)
        {
            cout<<tmp[i]<<":"<<int(tmp[i])-48<<endl;
            cout<<" adding "<<(int(tmp[i])-48)*pow(10,size(tmp)-i-1)<<endl;
            out+=(int(tmp[i])-48)*pow(10,size(tmp)-i-1);



        }
         if(n==1){out*=-1;}
            if(out<-2147483648){return -2147483648;}
            if(out>2147483647){return 2147483647;}

        return out;



    }
};
