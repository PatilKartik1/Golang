package main

import (
	"fmt"
)

// Function to swap two numbers using pointers
func swap(a, b *int) {
	*a, *b = *b, *a
}

func main() {
	x, y := 10, 20
	fmt.Println("Before swapping: x =", x, "y =", y)

	swap(&x, &y) // Passing memory addresses
	fmt.Println("After swapping: x =", x, "y =", y)
}
