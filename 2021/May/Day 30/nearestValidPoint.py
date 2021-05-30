# source : https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/submissions/
class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:


        valid = [i for i in  points if i[0]==x or i[1]==y];
        if(len(valid)==0):
            return -1;
        else:
            manhattan =float('inf');
            index = -1;
            for elem in valid:
                temp = abs(elem[0]-x)+abs(elem[1]-y)
                if(temp<manhattan):
                    manhattan = temp;
                    index = points.index(elem);
            return index;


            
