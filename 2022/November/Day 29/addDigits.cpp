// Source : https://leetcode.com/problems/add-digits/submissions/
class Solution {
public:
    int addDigits(int num) {
        int t=num;
        int debug=0;
        while(t>=10)
        {
            t=0;
        while(num)
        {
            t+=num%10;
            num/=10;
        }

            if(debug)
            cout<<"Num is "<<num<<" T : "<<t<<endl;
            num=t;
        }

        return t;
    }
};
