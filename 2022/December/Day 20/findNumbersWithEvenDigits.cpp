// Source : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int temp=0;
        for(auto&i:nums)
        {
            temp=0;
            while(i)
            {
                i/=10;
                temp++;
            }

            if(temp%2==0){count++;}

        }
        return count;
    }
};
