# sourcr :https://leetcode.com/problems/intersection-of-three-sorted-arrays/submissions/
class Solution:
    def arraysIntersection(self, arr1: List[int], arr2: List[int], arr3: List[int]) -> List[int]:

        intersection =[]

        max_lower = float("-inf");
        min_upper = float("inf");


        for i in arr1:
            max_lower = max(max_lower,i);
            min_upper = min(min_upper,i);

            if(i in arr2 and i in arr3):
                intersection.append(i)
        return intersection
