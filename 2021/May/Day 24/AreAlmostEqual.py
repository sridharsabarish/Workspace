# Source : https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/submissions/
class Solution(object):
    def areAlmostEqual(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """

        l1 = len(s1)
        l2 = len(s2)
        if(not l1==l2):
            return False
        else:

            if(s1==s2):
                return True

            else:
                count=0;
                for i in range(l1):
                    if(s1[i]==s2[i]):
                        count+=1;
                    else:

                        if(not s1.count(s1[i])==s2.count(s1[i])):
                            return False
                if(count>=l1-2):
                    return True
