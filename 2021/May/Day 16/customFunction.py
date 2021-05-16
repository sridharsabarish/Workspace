# Soruce :https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation/submissions/
"""
   This is the custom function interface.
   You should not implement it, or speculate about its implementation
   class CustomFunction:
       # Returns f(x, y) for any given positive integers x and y.
       # Note that f(x, y) is increasing with respect to both x and y.
       # i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
       def f(self, x, y):

"""

class Solution:
    def findSolution(self, customfunction: 'CustomFunction', z: int) -> List[List[int]]:
        lists =[];
        for i in range(1,1000):
            for j in range(1,1000):

                if(customfunction.f(i,j)==z):
                    lists.append([i,j]);
                elif(customfunction.f(i,j)>z):
                    break
        return lists
