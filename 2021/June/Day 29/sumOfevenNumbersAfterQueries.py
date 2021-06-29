# Source : https://leetcode.com/problems/sum-of-even-numbers-after-queries/submissions/
class Solution(object):
    def sumEvenAfterQueries(self, nums, queries):
        """
        :type nums: List[int]
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        answer =[];
        sums =0;
        for i in nums:
            if(i%2==0):
                sums+=i;
        for i in range(len(nums)):

            val = queries[i][0]
            index = queries[i][1];
            if((nums[index]+val)%2==0):
                if(nums[index]%2==0):
                    sums+=val
                else:
                    sums+=nums[index]+val;
            else:
                if(nums[index]%2==0):
                    sums-=nums[index];

            nums[index]+=val;

            answer.append(sums);
        return answer
