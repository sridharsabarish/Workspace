// Source : https://leetcode.com/problems/plus-one/submissions/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=1;
        int temp=0;
        for(int i=size(digits)-1;i>=0;i--)
        {
               temp = digits[i]+c;
               digits[i]=temp%10;
               c=temp/10;

         }
        if(c==1)
        {
            digits.insert(digits.begin(),c);
        }
        return digits;
    }
};
