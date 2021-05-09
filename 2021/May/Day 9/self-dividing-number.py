# Source:https://leetcode.com/problems/self-dividing-numbers/submissions/
class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        lists =[i for i in range(left,right+1) if self.isSelfDividing(i)]
        return lists
            
    def isSelfDividing(self,num):
        n = num;
        while(n):
            digit = int(n%10);
            if(digit==0 or not num%digit==0):
                return False
            n = int(n/10);
        return True
