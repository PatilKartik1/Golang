package main

import (
	"fmt"
)

// Function to check if a number is a palindrome
func isPalindrome(n int) bool {
	original := n
	reverse := 0

	for n > 0 {
		digit := n % 10
		reverse = reverse*10 + digit
		n /= 10
	}

	return original == reverse
}

func main() {
	var num int
	fmt.Print("Enter a number: ")
	fmt.Scan(&num)

	if isPalindrome(num) {
		fmt.Println(num, "is a Palindrome.")
	} else {
		fmt.Println(num, "is NOT a Palindrome.")
	}
}
