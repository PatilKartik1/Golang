package main

import (
	"fmt"
)

func main() {
	// Create a buffered channel with a capacity of 5
	ch := make(chan int, 5)

	// Store values in the channel
	ch <- 10
	ch <- 20
	ch <- 30

	// Display the channel capacity and length
	fmt.Println("Channel Capacity:", cap(ch)) // Total capacity of the channel
	fmt.Println("Channel Length before reading:", len(ch)) // Current number of elements

	// Read values from the channel
	fmt.Println("Reading value:", <-ch)
	fmt.Println("Reading value:", <-ch)

	// Display the modified channel length after reading
	fmt.Println("Channel Length after reading:", len(ch))
}
