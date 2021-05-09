class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:

        count = 0
        for i in range(len(endTime)):
            if(endTime[i]>=queryTime) and startTime[i]<=queryTime:
                count = count+1
        return count
