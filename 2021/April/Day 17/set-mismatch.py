# source : https://leetcode.com/problems/set-mismatch/submissions/


class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        missing = 0;
        visited = [];
        repeated =0;
        for i in nums:
            if(i in visited):
                repeated = i;
                break
            else:
                visited.append(i)

        for i in range(1,len(nums)+1):
            if(i not in nums):
                missing = i;
                break
        return [repeated,missing]
