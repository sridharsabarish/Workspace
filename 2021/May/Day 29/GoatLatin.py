# source : https://leetcode.com/problems/goat-latin/submissions/
class Solution(object):
    def toGoatLatin(self, sentence):
        """
        :type sentence: str
        :rtype: str
        """

        vowels = ['a','e','i','o','u'];
        lists = sentence.split();
        out = "";
        for i in range(len(lists)):
            if(lists[i][0].lower() in vowels):

                out+= str(lists[i])
            else:
                out+= str(lists[i][1:]+lists[i][0]);

            out+='ma';

            out+='a'*(i+1)
            if(not i==len(lists)-1):
                out+= " ";
        return(out)
