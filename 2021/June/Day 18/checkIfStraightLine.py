# Source : https://leetcode.com/problems/check-if-it-is-a-straight-line/submissions/
class Solution(object):
    def checkStraightLine(self, coordinates):
        """
        :type coordinates: List[List[int]]
        :rtype: bool
        """

        nr = float(coordinates[1][1]-coordinates[0][1]);
        dr = float(coordinates[1][0]-coordinates[0][0]);

        if(dr==0):

            for x,y in coordinates:
                if(x!=coordinates[1][0]):
                    return False
            return True

        m = float(nr/dr);
        c = coordinates[0][1]-(m*coordinates[0][0]);

        for i in range(len(coordinates)):

            y = (m*coordinates[i][0]) + c;

            if(not y==coordinates[i][1]):
                return False
        return True
