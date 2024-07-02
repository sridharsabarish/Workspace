// Source  :https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

func minimumOperations(nums []int) int {
	l := len(nums)
	op := 0
	for i := 0; i < l; i++ {
		if nums[i]%3 != 0 {
			op = op + 1
		}
	}
	return op
}