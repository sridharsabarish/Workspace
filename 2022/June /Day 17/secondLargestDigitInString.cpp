// Source : https://leetcode.com/problems/second-largest-digit-in-a-string/submissions/
class Solution {
public:
    int secondHighest(string s) {
        vector<int> digit;
        int max=-1;
        int s1=-1;

        for(auto&i:s)
        {
            if(int(i)>=48 &&int(i)<58)
            {
                if(int(i)-48>max)
                {

                    s1=max;
                    max=int(i)-48;
                }
                else if(int(i)-48>s1 && int(i)-48<max)
                {
                    s1=int(i)-48;
                }

            }

        }

       return s1;
    }
};
