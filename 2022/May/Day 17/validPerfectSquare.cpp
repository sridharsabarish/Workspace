//  Source : https://leetcode.com/problems/valid-perfect-square/submissions/
class Solution {
public:
    bool isPerfectSquare(int num) {

        double val = log(num);
        int i=1;
        while(2*log(i)<=val)
        {
            if(2*log(i)==val){return true;}
            i++;

        }
        return false;
    }
};
