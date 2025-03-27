package main

import (
	"fmt"
)

// Function to sort an array using Bubble Sort
func bubbleSort(arr []int) {
	n := len(arr)
	for i := 0; i < n-1; i++ {
		for j := 0; j < n-i-1; j++ {
			if arr[j] > arr[j+1] {
				// Swap elements
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
}

func main() {
	var n int
	fmt.Print("Enter the number of elements: ")
	fmt.Scanln(&n)

	arr := make([]int, n)
	fmt.Println("Enter the elements:")

	// Input elements
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	// Sort the array
	bubbleSort(arr)

	// Display sorted array
	fmt.Println("Sorted Array in Ascending Order:", arr)
}
