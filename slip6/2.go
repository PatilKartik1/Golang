package main

import (
	"fmt"
)

// Function to copy elements from one array to another
func copyArray(source []int) []int {
	// Create a new array with the same size
	dest := make([]int, len(source))

	// Copy elements
	for i, val := range source {
		dest[i] = val
	}

	return dest
}

func main() {
	var n int

	// Accept array size
	fmt.Print("Enter the number of elements in the array: ")
	fmt.Scan(&n)

	// Create an array and accept elements
	sourceArray := make([]int, n)
	fmt.Println("Enter the elements:")
	for i := 0; i < n; i++ {
		fmt.Scan(&sourceArray[i])
	}

	// Call function to copy the array
	copiedArray := copyArray(sourceArray)

	// Display the arrays
	fmt.Println("\nOriginal Array:", sourceArray)
	fmt.Println("Copied Array:", copiedArray)
}

