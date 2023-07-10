# Source : https://leetcode.com/problems/separate-the-digits-in-an-array/
class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        out=[];
        for element in nums:
            tmp=[]
            while(element):
                tmp.append(element%10);
                element=int(element/10)
            tmp.reverse();
            for i in tmp:
                out.append(i);
        return out;