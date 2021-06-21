# Source : https://leetcode.com/problems/destination-city/submissions/
class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        dicts ={}
        for i,j in paths:
            dicts[i]= j;

        key = paths[0][0];
        while(True):

            if(key not in dicts):
                return key;
            else:
                key = dicts[key]
