package main

import (
	"fmt"
)

func main() {
	// Create a channel of integers
	numChannel := make(chan int)

	// Start a goroutine to send values to the channel
	go func() {
		for i := 1; i <= 5; i++ {
			numChannel <- i // Sending values to channel
		}
		close(numChannel) // Closing the channel after sending values
	}()

	// Read values from the channel using for-range loop
	fmt.Println("Receiving values from channel:")
	for num := range numChannel {
		fmt.Println(num)
	}

	fmt.Println("Channel closed, no more values to receive.")
}
