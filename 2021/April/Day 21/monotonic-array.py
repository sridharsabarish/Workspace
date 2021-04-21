# source : https://leetcode.com/problems/monotonic-array/submissions/
class Solution(object):
    def isMonotonic(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """

        inc = 0
        dec =0


        prev = A[0];

        for i in range(1,len(A)):
            if(A[i]>prev):
                inc = 1;
            elif(A[i]<prev):
                dec = 1;

            if(inc and dec):
                return False
            prev = A[i]
        if( not (inc) and dec) or (not(dec) and inc) or (not(inc) and not(dec)):
            return True
        return False
