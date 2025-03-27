package main

import (
	"fmt"
)

// Function to remove an element from a slice at a given index
func remove(slice []int, index int) []int {
	return append(slice[:index], slice[index+1:]...)
}

func main() {
	// 1️⃣ Creating and Initializing a Slice
	numbers := []int{10, 20, 30, 40, 50}
	fmt.Println("Initial Slice:", numbers)

	// 2️⃣ Appending Elements to a Slice
	numbers = append(numbers, 60, 70)
	fmt.Println("After Append:", numbers)

	// 3️⃣ Removing an Element (Removing element at index 2)
	numbers = remove(numbers, 2)
	fmt.Println("After Removing Element at Index 2:", numbers)

	// 4️⃣ Copying a Slice
	newSlice := make([]int, len(numbers))
	copy(newSlice, numbers)
	fmt.Println("Copied Slice:", newSlice)

	// 5️⃣ Checking Length and Capacity
	fmt.Println("Length:", len(numbers), "Capacity:", cap(numbers))
}
