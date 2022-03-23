// Source : https://leetcode.com/problems/count-items-matching-a-rule/submissions/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int ind=0;int c=0;
        if(ruleKey=="type"){ind=0;}
        else if(ruleKey=="color"){ind=1;}
        else{ind=2;}

      for(int i=0;i<size(items);i++)
      {
          if(items[i][ind]==ruleValue){c++;}

      }
        return c;

    }
};
