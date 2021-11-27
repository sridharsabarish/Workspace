# source : https://leetcode.com/problems/concatenation-of-array/submissions/
public class Solution {
    public int[] GetConcatenation(int[] nums) {
        nums = nums.ToList().Concat(nums.ToList()).ToArray();
        return nums;
    }
}
