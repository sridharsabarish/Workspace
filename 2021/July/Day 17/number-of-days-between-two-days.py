# Source : https://leetcode.com/problems/number-of-days-between-two-dates/
class Solution(object):
    def daysBetweenDates(self, date1, date2):
        """
        :type date1: str
        :type date2: str
        :rtype: int
        """
        a = date(int(date1[0:4]),int(date1[5:7]),int(date1[8:]))
        b = date(int(date2[0:4]),int(date2[5:7]),int(date2[8:]))
        return abs((a-b).days)
