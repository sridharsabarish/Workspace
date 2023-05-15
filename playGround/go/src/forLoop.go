package main

import "fmt"

func main() {

	i := 1

	for i <= 3 {
		fmt.Println(i)
		i += 1
	}

	for i := 4; i <= 30; i += 5 {
		fmt.Println(i)
		i += 1
	}

	// Infinite loop
	for {

		fmt.Println(" Line ")
		break
	}

	for n := 0; n <= 5; n++ {
		if n%2 == 0 {
			continue
		}
		fmt.Println(n)
	}

}
