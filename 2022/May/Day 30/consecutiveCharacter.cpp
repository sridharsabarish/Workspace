// Source : https://leetcode.com/problems/consecutive-characters/
class Solution {
public:
    int maxPower(string s) {

        int max=1;
        int count =1;

        for(int i=1;i<size(s);i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
                max=count>max?count:max;
            }
            else
            {
             count=1;
            }

        }

        return max;

    }
};
