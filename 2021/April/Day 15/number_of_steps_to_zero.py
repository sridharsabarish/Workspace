'''
https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/
'''
class Solution:
    def numberOfSteps(self, num: int) -> int:
        n_step =0

        while(num):
            if(num%2==0):
                num=int(num/2)
            else:
                num=num-1
            n_step+=1
        return n_step
