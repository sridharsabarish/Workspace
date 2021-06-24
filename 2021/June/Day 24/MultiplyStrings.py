# Source : https://leetcode.com/problems/multiply-strings/submissions/
class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        val =0;
        val2 =0;
        l1 = len(num1);
        l2 = len(num2);


        for i in range(len(num1)):
            val +=10**(l1-i-1)*(int(num1[i]));
        for i in range(len(num2)):
            val2 +=10**(l2-i-1)*(int(num2[i]));

        return str(val*val2)
