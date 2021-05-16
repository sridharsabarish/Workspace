class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:

        maximum = max(arr);

        for i in range(len(arr)):
            if(arr[i]==maximum):
                return i
