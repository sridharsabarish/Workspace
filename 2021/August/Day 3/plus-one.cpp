class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1;
        for(int i=size(digits)-1;i>=0;i--)
        {
            digits[i] = digits[i]+c;
            if(digits[i]>9)
            {
                c=1;
                digits[i]-=10;
            }
            else
            {
                c=0;
            }
        }
        if(c==1)
        {
        digits.insert(digits.begin(),c);}
        return digits;
    }
};
