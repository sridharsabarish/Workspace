// Source : https://leetcode.com/problems/power-of-two/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){return false;}
        if(n==1){return true;}

        while(n)
        {
            if(n!=1 && n%2==1)
            {
                return false;
            }
            n/=2;
        }
        return true;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n<=0){return false;}

        if(n==1){return true;}

        while(n)
        {
            if(n!=1 && n%3!=0)
            {
                return false;
            }
            n/=3;
        }
        return true;
    }
};



class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<=0){return false;}

        if(n==1){return true;}

        while(n)
        {
            if(n!=1 && n%4!=0)
            {
                return false;
            }
            n/=4;
        }
        return true;


    }
};
