'''
Source : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/submissions
'''

class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        out ={}
        i=0;
        ts=len(arr)/4;
        return next((arr[i] for i in range(len(arr)) if (arr.count(arr[i])>ts)), -1)
