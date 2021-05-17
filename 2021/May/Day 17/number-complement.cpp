// Source : https://leetcode.com/problems/number-complement/submissions/
class Solution {
public:
    int findComplement(int num) {

        return findDigits(num);
    }

    int findDigits(int num)
        {
           vector<int> digits;

        while(num)
        {
            if(num%2==0)
            {
                digits.insert(digits.begin(),1);
            }
            else
            {
                digits.insert(digits.begin(),0);
            }

            num/=2;

        }

        int i=size(digits)-1;
        int sum =0;
            for (auto& it : digits) {

            // Print the values
            sum+= it*pow(2,i);
            i = i-1;
            }

    return sum;
    }
};
