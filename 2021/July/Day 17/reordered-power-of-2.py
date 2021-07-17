# Source : https://leetcode.com/problems/reordered-power-of-2/submissions/
class Solution(object):
    def reorderedPowerOf2(self, n):
        """
        :type n: int
        :rtype: bool
        """
        perm = permutations(str(n));
        for i in perm:
            st ="";
            for elem in list(i):
                st+=elem;

            #print(st)
            if(st[0]=='0' and len(st)!=1):
                continue
            val = int(st);

            if(self.checkPower(val)):

                return True
        return False


    def checkPower(self,val):
        while(val>1):
                if(val%2==1):
                    return False
                val = int(val/2);
        return True
