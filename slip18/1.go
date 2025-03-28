package main

import (
	"fmt"
)

// Function to print the multiplication table of a given number
func printMultiplicationTable(num int) {
	fmt.Printf("Multiplication Table of %d:\n", num)
	for i := 1; i <= 10; i++ {
		fmt.Printf("%d x %d = %d\n", num, i, num*i)
	}
}

func main() {
	var number int
	fmt.Print("Enter a number: ")
	fmt.Scan(&number) // Taking user input
	printMultiplicationTable(number) // Calling function
}
