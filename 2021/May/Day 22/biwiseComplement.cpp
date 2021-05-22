// Source : https://leetcode.com/problems/complement-of-base-10-integer/submissions/
class Solution {
public:
    int bitwiseComplement(int n) {

        vector<int> digits;
        if(n==0){return 1;}
        while(n)
        {

            digits.insert(digits.begin(),n%2==1?0:1);
            n/=2;
        }


        int sum =0;
        int j=size(digits)-1;
        for(auto & i : digits)
        {
            sum+=pow(2,j)*i;
            j--;
        }

        return sum;



    }
};
