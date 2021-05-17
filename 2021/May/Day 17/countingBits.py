# Source :https://leetcode.com/problems/counting-bits/submissions/
class Solution:
    def countBits(self, num: int) -> List[int]:
        return [self.return_ones(i) for i in range(num+1)];



    def return_ones(self,num):
        count =0;
        while(num):
            if(int(num%2==1)):
                count+=1;
            num = int(num/2)
        return count
