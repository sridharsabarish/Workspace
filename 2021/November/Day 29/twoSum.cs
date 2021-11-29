public class Solution {
    public int[] TwoSum(int[] nums, int target) {

        int [] v = new int[]{};
        for(int i=0;i<nums.Length;i++)
        {
            for(int j=i+1;j<nums.Length;j++)
            {
                if(nums[j]==target-nums[i])
                {
                    v = v.Append(i).ToArray();
                     v = v.Append(j).ToArray();
                    return v;
                }
            }
        }
        return v;
    }
}
