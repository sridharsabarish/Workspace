# source : https://leetcode.com/problems/sort-array-by-parity-ii/submissions/
class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:


        odd = [i for i in nums if i%2==1];
        even = [i for i in nums if i%2==0];
        out = [];

        for i in range(len(odd)):
            out.append(even[i]);
            out.append(odd[i]);
        return out;
