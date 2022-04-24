class Solution {
public:
    int maximum69Number (int num) {

        vector<int> digits;
        while(num)
        {
            digits.insert(digits.begin(),num%10);
            num/=10;
        }

        for(int i=0;i<size(digits);i++)
        {
            if(digits[i]==6)
            {
                digits[i]=9;
                break;
            }
        }
        for(int i=0;i<size(digits);i++)
        {
            num=num+digits[i]*pow(10,size(digits)-1-i);

        }
        return num;




    }
};
