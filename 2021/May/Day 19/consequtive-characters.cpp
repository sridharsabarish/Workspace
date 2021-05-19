// Source : https://leetcode.com/problems/consecutive-characters/submissions/
class Solution {
public:
    int maxPower(string s) {

        char prev ='-';
        int max = 0;
        int count =1;

        for(auto &c:s)
        {
            if(c==prev)
            {
                count++;
            }
            else
            {
                count=1;
            }
            prev = c;
            max = count>max?count:max;
        }

        return max;
    }
};
