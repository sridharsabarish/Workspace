// Source : https://leetcode.com/problems/plus-one/submissions/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

    reverse(digits.begin(),digits.end());

    int c=1;
    for(int i=0;i<size(digits);i++)
    {
        digits[i]+=c;
        if(digits[i]>=10)
        {
            c=1;
            digits[i]=digits[i]%10;
        }
        else
        {
            c=0;
        }
    }
        if(c==1)
        {
            digits.insert(digits.end(),1);
        }

        reverse(digits.begin(),digits.end());
        return digits;

    }
};
