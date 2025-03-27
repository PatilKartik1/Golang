
package main

import (
	"fmt"
)

// Function to handle even numbers
func evenNumbers(ch <-chan int) {
	for num := range ch {
		fmt.Println("Even Number:", num)
	}
}

// Function to handle odd numbers
func oddNumbers(ch <-chan int) {
	for num := range ch {
		fmt.Println("Odd Number:", num)
	}
}

func main() {
	// Slice of integers
	numbers := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	// Creating channels for even and odd numbers
	evenCh := make(chan int)
	oddCh := make(chan int)

	// Goroutines to process numbers
	go evenNumbers(evenCh)
	go oddNumbers(oddCh)

	// Sending numbers to respective channels
	for _, num := range numbers {
		if num%2 == 0 {
			evenCh <- num
		} else {
			oddCh <- num
		}
	}

	// Closing channels after sending all values
	close(evenCh)
	close(oddCh)
}

