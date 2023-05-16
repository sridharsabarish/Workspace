package main

import (
	"fmt"
)

func vals() (int, string) {

	return 42, "Is the Secret of the Universe"

}

func main() {

	a, b := vals() // Remember the immediate expansion.
	fmt.Println(a)
	fmt.Println(b)

}
