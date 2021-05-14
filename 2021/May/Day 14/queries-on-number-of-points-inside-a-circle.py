# Source :https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/submissions/
class Solution(object):
    def countPoints(self, points, queries):
        """
        :type points: List[List[int]]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        lists =[];
        for qx,qy,qr in queries:
            count =0;
            for px,py in points:

                if(sqrt((qx-px)**2 + (qy-py)**2))<=qr:
                    count = count+1;
            lists.append(count)
        return lists
