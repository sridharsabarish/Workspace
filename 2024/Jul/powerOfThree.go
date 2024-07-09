// Source : https://leetcode.com/problems/power-of-three/
func isPowerOfThree(n int) bool {
	for n >= 1 {
		if n == 1 {
			return true
		} else if n == 0 {
			return false
		}
		if n%3 != 0 {
			return false
		}
		n /= 3
	}
	return false
}