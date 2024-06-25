func isPalindrome(x int) bool {

	// Find out how to store array
	numbers := make([]int, 0)
	if x == 0 {
		return true
	}
	if x < 0 {
		return false
	}

	for x > 0 {
		// How to print in go?
		digits := int(x % 10)
		fmt.Println(digits)
		x = int(x / 10)
		numbers = append(numbers, digits)
		fmt.Println(numbers)
	}

	// Compare 0 to end, 1 to end-1, till you reach middle.

	f := 0
	l := len(numbers) - 1
	flag := 0
	for f <= l {

		if numbers[f] != numbers[l] {
			fmt.Println(f, l)
			fmt.Println("This is ")
			fmt.Println(numbers[f], numbers[l])
			flag = 1
			return false
			break
		}
		f = f + 1
		l = l - 1
	}

	if flag == 0 {
		return true
	}

	return true
}

// Extract the digits Store in an array
// Check the till n-1/2 and see