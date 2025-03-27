package main

import (
	"fmt"
	"testing"
)

// Function to calculate square of a number
func square(n int) int {
	return n * n
}

func main() {
	num := 5
	fmt.Printf("Square of %d is %d\n", num, square(num))
}
