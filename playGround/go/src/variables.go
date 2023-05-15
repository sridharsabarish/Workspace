package main

import "fmt"

func main() {
	// Go infer's Variable's Type
	var firstVariable = "Hello World"
	fmt.Println(firstVariable)
	var b, c float32 = 4.5, 6.2
	fmt.Println(b, c)

	// Short hand for variable initialization
	f := "Apple"
	fmt.Println(f)

}
