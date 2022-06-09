// Source : https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/submissions/
class Solution {
public:
    bool digitCount(string num) {

        int s = size(num);
        map<char,int> m;
        for(int i=0;i<size(num);i++)
        {
             if(std::count(num.begin(),num.end(),char(i+48))!=int(num[i])-48)
            {
                return false;
            }
        }

        return true;

    }
};
