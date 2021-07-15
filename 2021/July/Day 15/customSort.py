class Solution(object):
    def customSortString(self, order, str):
        """
        :type order: str
        :type str: str
        :rtype: str
        """
        dicts = {}
        for i in str:
            dicts[i] = dicts.get(i,0)+1;

        strings = ""
        for i in order:
            if i in str:
                strings+= i * dicts.get(i,1);

        for i in set(str):
            if(i not in strings):
                strings+= i*dicts.get(i,1);
        return strings
