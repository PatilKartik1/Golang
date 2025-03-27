package main

import (
	"fmt"
)

// Function to calculate sum of squares of digits
func sumOfSquares(num int, ch chan int) {
	sum := 0
	for num > 0 {
		digit := num % 10
		sum += digit * digit
		num /= 10
	}
	ch <- sum // Send result to channel
}

// Function to calculate sum of cubes of digits
func sumOfCubes(num int, ch chan int) {
	sum := 0
	for num > 0 {
		digit := num % 10
		sum += digit * digit * digit
		num /= 10
	}
	ch <- sum // Send result to channel
}

func main() {
	var num int
	fmt.Print("Enter a number: ")
	fmt.Scan(&num)

	// Creating channels
	squareCh := make(chan int)
	cubeCh := make(chan int)

	// Calling goroutines
	go sumOfSquares(num, squareCh)
	go sumOfCubes(num, cubeCh)

	// Receiving results from channels
	squareSum := <-squareCh
	cubeSum := <-cubeCh

	fmt.Println("Sum of squares of digits:", squareSum)
	fmt.Println("Sum of cubes of digits:", cubeSum)
}
