// Source. :https://leetcode.com/problems/add-binary/
// Status : Fails for extreme cases.  runtime error: 5.51548e+29 is outside the range of representable values of type 'int'
// Incomeplete
class Solution {
public:

    double getInt(string a)
    {
        double out=0;
        for(double i=size(a)-1;i>=0;i--)
        {
            //cout<<int(a[i])-48<<" ";
            out+=pow(2,size(a)-1-i)*(int(a[i])-48);
        }
        cout<<" "<<out;
        return out;
    }

    string getBin(int a)
    {
        string out ="";

        while(a)
        {
            out+=to_string(a%2);
            a/=2;
        }
        reverse(out.begin(),out.end());
        //cout<<" "<<out;
        if(out==""){return "0";}
        return out;

    }
    string addBinary(string a, string b) {



        double a1,b1,o1;
        string o;

        a1=getInt(a);
        b1=getInt(b);
        o1 = a1+b1;
        o = getBin(o1);


        return o;
    }
};
