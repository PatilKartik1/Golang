package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	// Seed the random number generator
	rand.Seed(time.Now().UnixNano())

	// Print numbers from 0 to 10
	for i := 0; i <= 10; i++ {
		fmt.Println(i)

		// Generate a random delay between 0 and 250 milliseconds
		delay := time.Duration(rand.Intn(251)) * time.Millisecond
		time.Sleep(delay)
	}
}
