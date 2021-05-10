# SOurce : https://leetcode.com/problems/three-consecutive-odds/submissions/
class Solution(object):
    def threeConsecutiveOdds(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        count =0;
        for i in range(len(arr)-2):
            sub_array = arr[i:i+3]
            if(self.check_three_odds(sub_array)):
                return True
        return False

    def check_three_odds(self,arr):
        if(len(arr)<3):
            return False
        return arr[0]%2==1 and arr[1]%2==1 and arr[2]%2==1
