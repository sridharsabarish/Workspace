// Source : https://leetcode.com/problems/complex-number-multiplication/
class Solution {
public:

    vector<int> getParts(string nums,int v=0)
    {

        string real,complex;
        int f=0;
        for(auto&i:nums)
        {


            if(f==0 && i!='+')
            {
                real+=i;

            }
            else if(i=='+')
            {
                f=1;
            }

            else
            {
                if(i!='i')
                {complex+=i;
                 }
            }


        }

        if(v)
        {
        cout<<"Real :"<<stoi(real)<<" Complex :"<<stoi(complex)<<endl;
        }
        return {stoi(real),stoi(complex)};

    }

    string complexNumberMultiply(string num1, string num2) {

        vector<int> out1 = getParts(num1);
        vector<int> out2 = getParts(num2);
        int v=0;
        string out="";
        int real = out1[0]*out2[0] - out1[1]*out2[1];
        int complex = out1[0]*out2[1]+out2[0]*out1[1];
        out=to_string(real)+'+'+to_string(complex)+'i';
        if(v)
        {cout<<"Real out :"<<real<<" Comp Out. :"<<complex;
        cout<<"\n Final out "<<out;}
        return out;

    }
};
