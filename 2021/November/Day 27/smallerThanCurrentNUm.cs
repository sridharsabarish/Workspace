public class Solution {
    public int[] SmallerNumbersThanCurrent(int[] nums) {

        int [] result = new int[]{};
        int count =0;
        foreach(var number in nums)
        {
            count =0;
            for(int i=0;i<nums.Length;i++)
            {
                if(number>nums[i])
                {
                    count++;
                }
            }
        result = result.Append(count).ToArray();
        }
        return result;
    }
}
