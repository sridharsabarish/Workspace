# Source ;https://leetcode.com/problems/count-items-matching-a-rule/submissions/
class Solution(object):
    def countMatches(self, items, ruleKey, ruleValue):
        """
        :type items: List[List[str]]
        :type ruleKey: str
        :type ruleValue: str
        :rtype: int
        """
        idx =-1;
        if(ruleKey=='color'):
            idx = 1;
        elif(ruleKey=='type'):
            idx = 0;
        elif(ruleKey=='name'):
            idx=2;

        count = 0;
        for i in range(len(items)):

            if(items[i][idx]==ruleValue):
                count = count+1
        return count
