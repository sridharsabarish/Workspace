// Source : https://leetcode.com/problems/count-asterisks/submissions/
class Solution {
public:
    int countAsterisks(string s) {

        int count_bar=0;
        int count_asterix=0;

        for(auto&i:s)
        {
            if(i=='|')
            {
                count_bar++;
            }
            else if(count_bar%2==0)
            {
                if(i=='*')
                {
                    count_asterix++;
                }
            }
        }

        return count_asterix;


    }
};
