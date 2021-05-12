# Source :https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/
class Solution(object):
    def luckyNumbers (self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        row_min =[float("inf") for _ in range(len(matrix))]
        col_max =[float("-inf") for _ in range(len(matrix[0]))]

        lists =[];

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if(matrix[i][j]<row_min[i]):
                    row_min[i] = matrix[i][j]
                if(matrix[i][j]>col_max[j]):
                    col_max[j] = matrix[i][j]

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if(matrix[i][j] == row_min[i]) and (matrix[i][j]==col_max[j]):
                    lists.append(matrix[i][j])
        return lists
