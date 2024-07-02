// Source : https://leetcode.com/problems/smallest-even-multiple/
func smallestEvenMultiple(n int) int {

	// Smallest Multiple of 2 and n!
	if n%2 == 0 {
		return n
	}
	return n * 2
}