package main

import (
	"fmt"
	"math/rand"
)

func main() {

	for i := 10; i <= 100; i++ {
		var first int = rand.Intn(120)

		if first%10 == 0 {
			fmt.Println(first, " is Even")
		} else {
			fmt.Println(first, " s Odd")
		}
	}
}
