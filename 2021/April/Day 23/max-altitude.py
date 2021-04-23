#Source : https://leetcode.com/problems/find-the-highest-altitude/submissions/
class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """

        maximum =0

        index =0

        while(index<len(gain)):
            maximum = max(maximum,sum(gain[:index+1]))
            index = index+1
        return maximum
