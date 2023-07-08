# Source : https://leetcode.com/problems/third-maximum-number
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        s=set(nums);
        l=list(s);
        l.sort();
        if(len(l)<3):
            return l[len(l)-1];
        else:
            return l[len(l)-3];