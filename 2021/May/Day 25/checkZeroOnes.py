# Source : https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/submissions/
class Solution(object):
    def checkZeroOnes(self, s):
        """
        :type s: str
        :rtype: bool
        """

        dicts={'0':0,'1':0};

        f=-1;
        for i in s:
            if f==-1:
                count =1;
                f=1
            else:
                if(i==prev):
                    count+=1;

                else:
                    count=1;
            dicts[i]=max(dicts[i],count);
            prev = i

        return dicts['1']>dicts['0']
