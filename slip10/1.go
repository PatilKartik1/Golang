package main

import (
	"fmt"
)

// Define an interface
type Data interface{}

// Function to display interface value with type assertion
func displayValue(d Data) {
	switch v := d.(type) {
	case int:
		fmt.Println("Integer Value:", v)
	case float64:
		fmt.Println("Float Value:", v)
	case string:
		fmt.Println("String Value:", v)
	default:
		fmt.Println("Unknown Type")
	}
}

func main() {
	// Assign different types to the interface
	var d Data

	d = 42
	displayValue(d)

	d = 3.14
	displayValue(d)

	d = "Hello, Go!"
	displayValue(d)
}

