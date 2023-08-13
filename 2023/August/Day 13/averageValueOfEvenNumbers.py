# Source : https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/submissions/
class Solution:
    def averageValue(self, nums: List[int]) -> int:
        i=0;
        sums=0;
        for number in nums:
            if(number%6==0):
                sums=sums+number
                i=i+1
        return int(sums/i) if (i!=0) else 0
        