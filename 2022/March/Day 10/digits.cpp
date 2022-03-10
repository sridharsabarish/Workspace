// Source : https://leetcode.com/problems/add-digits/submissions/
class Solution {
public:
    int addDigits(int num) {

        return ret(num);
    }

    int ret(int num)
    {
        if(num<10){return num;}
        int digits =0;
        while(num)
        {
            digits+=num%10;
            num/=10;
        }
        return ret(digits);

    }
};
