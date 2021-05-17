# Source :https://leetcode.com/problems/add-digits/submissions/
class Solution:
    def addDigits(self, num: int) -> int:
        digits =0;
        #print("Number is : ", num)
        if(int(num/10)==0):
            return num;
        while(num):
            digits+= int(num%10);
            num = int(num/10);
        #print(digits)
        return self.addDigits(digits);
