package main

import (
	"fmt"
)

// Function to check if a number is palindrome
func isPalindrome(num int) bool {
	originalNum := num
	reversedNum := 0

	for num > 0 {
		digit := num % 10
		reversedNum = reversedNum*10 + digit
		num = num / 10
	}

	return originalNum == reversedNum
}

func main() {
	var num int
	fmt.Print("Enter a number: ")
	fmt.Scanln(&num)

	// Calling the function and displaying the result
	if isPalindrome(num) {
		fmt.Println(num, "is a Palindrome number.")
	} else {
		fmt.Println(num, "is NOT a Palindrome number.")
	}
}
