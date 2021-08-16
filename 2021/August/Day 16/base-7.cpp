class Solution {
public:
    string convertToBase7(int num) {

        if(num==0){return "0";}

        string out ="";
        int neg = num<0;
        num =abs(num);

        while(num)
        {
            out+=to_string(num%7);
            num/=7;
        }

        reverse(out.begin(),out.end());
     if(neg){out = "-"+out;}
    return out;
    }
};
