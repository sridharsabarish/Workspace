// Source : https://leetcode.com/problems/two-sum/
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut result1:Vec<i32> = Vec::new();
        for  x in (0..nums.len()){
            for y in (x+1..nums.len()){
                    if nums[x] + nums[y] == target{
                    result1.push(x as i32);
                    result1.push(y as i32);
                    return result1;
                    }

                } ;
            }
        
        return result1;
    }
}