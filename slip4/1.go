package main

import (
	"fmt"
)

// Recursive function to calculate sum of digits
func sumOfDigits(n int) int {
	if n == 0 {
		return 0
	}
	return (n % 10) + sumOfDigits(n / 10)
}

func main() {
	var num int
	fmt.Print("Enter a number: ")
	fmt.Scanln(&num)

	// Call recursive function
	result := sumOfDigits(num)

	// Display result
	fmt.Println("Recursive Sum of Digits:", result)
}
