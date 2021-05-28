# Source : https://leetcode.com/problems/sort-array-by-increasing-frequency/submissions/
class Solution(object):
    def frequencySort(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        dicts  ={nums.count(i):[] for i in nums}

        for i in nums:
            dicts[nums.count(i)].append(i);

        l=[];
        for i in sorted(dicts.keys()):
            temp = dicts[i];
            temp = sorted(temp,reverse=True)
            for elem in temp:
                l.append(elem)
        return l;
