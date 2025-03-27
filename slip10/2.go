package main

import (
	"fmt"
)

// Function to generate Fibonacci series and send values to channel
func fibonacci(n int, ch chan int) {
	a, b := 0, 1
	for i := 0; i < n; i++ {
		ch <- a // Send value to channel
		a, b = b, a+b
	}
	close(ch) // Close the channel after sending all values
}

func main() {
	var n int
	fmt.Print("Enter the number of Fibonacci terms: ")
	fmt.Scan(&n)

	// Create a channel to pass Fibonacci numbers
	ch := make(chan int)

	// Start a goroutine to generate Fibonacci series
	go fibonacci(n, ch)

	// Read and print values from the channel
	fmt.Println("Fibonacci Series:")
	for num := range ch {
		fmt.Print(num, " ")
	}
}
