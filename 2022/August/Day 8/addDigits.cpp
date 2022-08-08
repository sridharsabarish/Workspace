// Source : https://leetcode.com/problems/add-digits/submissions/
// Slight improvisation, this makes it better time complexity wise
class Solution {
public:
    int addDigits(int num) {



        while(1)
        {
        int d=0;
        if(num<10){return num;}
        while(num)
        {
            d+=int(num%10);
            num/=10;

        }
            num=d;
        }
       return -1;
    }


};
