# Sourc : https://leetcode.com/problems/goal-parser-interpretation/submissions/
class Solution(object):
    def interpret(self, command):
        """
        :type command: str
        :rtype: str
        """
        string =""
        for i in range(len(command)):

            if(command[i]=='G'):
                string+="G";
            elif(command[i:i+2]=="()"):
                string+="o"
            elif(command[i:i+4]=="(al)"):
                string+="al"
        return string
