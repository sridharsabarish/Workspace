# Source : https://leetcode.com/problems/flip-game/
class Solution(object):
    def generatePossibleNextMoves(self, currentState):
        """
        :type currentState: str
        :rtype: List[str]
        """

        lists = [];
        for i in range(len(currentState)-1):

            if(currentState[i:i+2]=="++"):
                newVal = currentState[:i]+"--"
                if(i<len(currentState)-2):
                    newVal+=currentState[i+2:]
                lists.append(newVal)
        return lists
