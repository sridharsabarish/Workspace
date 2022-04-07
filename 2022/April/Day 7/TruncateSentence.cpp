class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string total="";
        string str="";
        for(auto&i:s)
        {
            if(isalpha(i))
            {
                str+=i;
            }
            else
            {
                if(str=="")
                {
                    continue;
                }
                else
                {
                    if(count!=0){total+=" ";}
                    total+=str;
                    str="";
                    count++;
                    if(count>=k){break;}

                }
            }

        }
        if(count==0){return s;}

        if(str!=""){total+=" "+str;}
        return total;
    }
};
