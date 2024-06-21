func runningSum(nums []int) []int {

	s := make([]int, 0, len(nums))
	// For loop in Go
	for i := 0; i < len(nums); i++ {
		if i > 0 {
			s = append(s, s[i-1]+nums[i])
		} else {
			s = append(s, nums[i])

		}
	}
	return s
}