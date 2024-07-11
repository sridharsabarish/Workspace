
// Source : https://leetcode.com/problems/strictly-palindromic-number/
func isNotPalindrome(n int, b int) bool {
	// Logic for Palindrome
	var s []int
	for n >= 1 {
		d := n % b
		n = int(n / b)
		s = append(s, d)
	}

	for i := 0; i < len(s); i++ {

		if s[i] != s[len(s)-1] {
			return true
		}
	}

	return false
}

func isStrictlyPalindromic(n int) bool {
	// 2 to n-2 it should satisfy
	for j := 2; j <= n-2; j++ {
		if isNotPalindrome(n, j) {
			return false
		}
	}
	return true
}