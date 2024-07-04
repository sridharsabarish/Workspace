// Source : https://leetcode.com/problems/length-of-last-word/
func isLetter(c rune) bool {
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
}

func lengthOfLastWord(s string) int {
	// Find current Word
	// Find next word.
	/*

	   A new word begins when you have a space before the alphabet and ends when an alphabet ends.
	*/

	curr := 0
	l := 0 // Length of previous word
	for _, c := range s {
		if isLetter(c) {
			curr++
		} else {
			if curr > 0 {
				l = curr
			}
			curr = 0
		}
	}

	if curr == 0 {
		return l
	}
	return curr

}