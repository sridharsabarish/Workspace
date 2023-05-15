package main

import (
	"fmt"
)

func main() {

	i := 22

	switch i {

	case 1:
		fmt.Println("This is a one")
	case 2:
		fmt.Println("This is a two")
	default:
		fmt.Println(" Can't find this one.")
	}

}
