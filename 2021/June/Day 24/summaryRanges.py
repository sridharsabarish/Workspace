# Source : https://leetcode.com/problems/summary-ranges/submissions/
class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """

        f=-1;
        start =-1;
        end =-1;
        lists =[];
        for i in nums:

            if(f==-1):
                start = i;
                end=i;
                f=1;

            elif(i==end+1):
                end+=1;
            else:

                if(start==end):
                    lists.append(str(start));
                else:
                    strs = str(start)+"->"+str(end);
                    lists.append(strs);
                start=i;
                end = start;

        if f==-1:
            return []
        if(start==end):
            lists.append(str(start));
        else:
            strs=str(start)+"->"+str(end);
            lists.append(strs);
        return lists

                
