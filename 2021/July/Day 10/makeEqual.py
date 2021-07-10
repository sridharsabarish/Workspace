# Source : class Solution(object):
    def makeEqual(self, words):
        """
        :type words: List[str]
        :rtype: bool
        """
        words = words
        dicts= {};

        if(len(words)==1):
            return True
        for i in words:
            for w in i:

                dicts[w]= dicts.get(w,0)+1;

        print(dicts)
        for i in dicts.keys():
            if(dicts[i]%len(words)):
                return False
        return True
class Solution(object):
    def makeEqual(self, words):
        """
        :type words: List[str]
        :rtype: bool
        """
        words = words
        dicts= {};

        if(len(words)==1):
            return True
        for i in words:
            for w in i:

                dicts[w]= dicts.get(w,0)+1;

        print(dicts)
        for i in dicts.keys():
            if(dicts[i]%len(words)):
                return False
        return True
