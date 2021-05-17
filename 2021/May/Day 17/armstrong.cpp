//Source :https://leetcode.com/problems/armstrong-number/submissions/
class Solution {
public:
    bool isArmstrong(int n) {

        vector<int> dig = getDigits(n);
        int sum=0;
        for(auto &i : dig)
        {
            sum+=pow(i,size(dig));
        }
        return sum==n;

        }


    vector<int> getDigits(int n)
    {
        vector<int> digits;
        while(n)
        {
            digits.insert(digits.end(),n%10);
            n/=10;
        }
        return digits;
    }



};
