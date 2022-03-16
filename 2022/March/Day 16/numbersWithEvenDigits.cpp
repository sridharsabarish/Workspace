//source : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count =0;
        int digits =0;
        for(auto &i:nums)
        {
            digits =0;
            while(i)
            {
                i/=10;
                digits++;
            }
            if(digits%2==0){count++;}
        }
        return count;
    }
};
