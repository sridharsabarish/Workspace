//Source : https://leetcode.com/problems/count-items-matching-a-rule/submissions/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(auto&i:items)
        {
            if(ruleKey=="type")
            {
                if(i[0]==ruleValue)
                {
                    count++;
                }

            }
            else if(ruleKey=="color")
            {
                if(i[1]==ruleValue)
                {
                    count++;
                }

            }


            else if(ruleKey=="name")
            {
                if(i[2]==ruleValue)
                {
                    count++;
                }

            }


        }
        return count;
    }
};
