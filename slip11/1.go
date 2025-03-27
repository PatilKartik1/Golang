package main

import (
	"fmt"
)

func isTwoDigit(num int) bool {
	// Check if the number is between 10 to 99 or -10 to -99
	return (num >= 10 && num <= 99) || (num <= -10 && num >= -99)
}

func main() {
	var num int

	// Accept number from user
	fmt.Print("Enter a number: ")
	fmt.Scan(&num)

	// Check if the number is two-digit
	if isTwoDigit(num) {
		fmt.Println(num, "is a two-digit number.")
	} else {
		fmt.Println(num, "is NOT a two-digit number.")
	}
}
