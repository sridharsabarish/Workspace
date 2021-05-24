# Source : https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/submissions/
class Solution(object):
    def canMakeArithmeticProgression(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        arr = sorted(arr);
        out = [arr[i]-arr[i+1] for i in range(len(arr)-1)];
        return len(set(out))==1
