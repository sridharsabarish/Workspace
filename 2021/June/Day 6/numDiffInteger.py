# source : https://leetcode.com/problems/number-of-different-integers-in-a-string/submissions/
class Solution(object):
    def numDifferentIntegers(self, word):
        """
        :type word: str
        :rtype: int
        """
        l =[];
        string=""

        f=-1;
        prev='';

        for i in word:
            if(i.isdigit()):

                string+=i;
            elif(prev.isdigit() and not i.isdigit()):
                l.append(int(str(string)));
                string="";
            prev = i;
        if(len(string)):
            l.append(int(str(string)))

        count =0;
        for i in set(l):

            count+=1;
        print(l)
        return count
