# source : https://leetcode.com/problems/shift-2d-grid/submissions/
class Solution(object):
    def shiftGrid(self, grid, k):
        """
        :type grid: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """

        lists =[];
        for i in grid:
            for j in i:
                lists.append(j)
        shift = (k)%len(lists);

        temp = lists[-shift:];
        for i in lists[:-shift]:
            temp.append(i);

        out =[];
        count =0;
        for i in range(len(grid)):
            out.append(temp[count:count+len(grid[0])]);
            count+=len(grid[0]);
        return out


        
