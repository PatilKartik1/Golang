package main

import (
	"fmt"
)

func fibonacci(n int) {
	first, second := 0, 1

	fmt.Println("Fibonacci Series:")
	for i := 0; i < n; i++ {
		fmt.Print(first, " ")
		next := first + second
		first = second
		second = next
	}
	fmt.Println()
}

func main() {
	var n int
	fmt.Print("Enter the number of terms: ")
	fmt.Scanln(&n)

	if n <= 0 {
		fmt.Println("Please enter a positive integer.")
	} else {
		fibonacci(n)
	}
}
