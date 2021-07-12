class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """


        strs =""

        while(columnNumber):
            columnNumber-=1;
            strs = chr(65+columnNumber%26)+strs
            columnNumber//=26
        return strs
