# Source : https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/
class Solution(object):
    def freqAlphabets(self, s):
        """
        :type s: str
        :rtype: str
        """

        dicts = {}

        for i in range(1,10):
            val = 96+i
            dicts[str(i)] = chr(val);

        for i in range(10,27):
            val = 96+i
            dicts[str(i)+str("#")] = chr(val);


        word ="";
        decrypted = ""

        i = 0;

        while(i<len(s)):
            word = s[i:i+3]
            if(word in dicts.keys()):
                decrypted += dicts[word];
                i = i+3;
            else:
                word =s[i:i+1]
                if(word in dicts.keys()):
                    decrypted += dicts[word];
                    i = i+1;
        return decrypted
