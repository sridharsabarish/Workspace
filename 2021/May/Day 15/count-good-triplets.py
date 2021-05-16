# Source ; https://leetcode.com/problems/count-good-triplets/submissions/
class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:

        val = [(arr[i],arr[j],arr[k]) for i in range(len(arr)-2) for j in range(i+1,len(arr)-1) for k in range(j+1,len(arr)) if(abs(arr[i]-arr[j])<=a) and
              (abs(arr[j]-arr[k])<=b) and (abs(arr[k]-arr[i])<=c)
              ]
        return(len(val))
