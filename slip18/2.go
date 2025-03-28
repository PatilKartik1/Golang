//calculator/calculator.go

package calculator

import "fmt"

// Add function
func Add(a, b float64) float64 {
	return a + b
}

// Subtract function
func Subtract(a, b float64) float64 {
	return a - b
}

// Multiply function
func Multiply(a, b float64) float64 {
	return a * b
}

// Divide function (handles division by zero)
func Divide(a, b float64) float64 {
	if b == 0 {
		fmt.Println("Error: Division by zero!")
		return 0
	}
	return a / b
}


// main.go

package main

import (
	"calculator"
	"fmt"
)

func main() {
	var num1, num2 float64
	var choice int

	fmt.Println("Calculator Operations:")
	fmt.Println("1. Addition")
	fmt.Println("2. Subtraction")
	fmt.Println("3. Multiplication")
	fmt.Println("4. Division")
	fmt.Print("Enter your choice (1-4): ")
	fmt.Scan(&choice)

	fmt.Print("Enter first number: ")
	fmt.Scan(&num1)
	fmt.Print("Enter second number: ")
	fmt.Scan(&num2)

	switch choice {
	case 1:
		fmt.Printf("Result: %.2f\n", calculator.Add(num1, num2))
	case 2:
		fmt.Printf("Result: %.2f\n", calculator.Subtract(num1, num2))
	case 3:
		fmt.Printf("Result: %.2f\n", calculator.Multiply(num1, num2))
	case 4:
		fmt.Printf("Result: %.2f\n", calculator.Divide(num1, num2))
	default:
		fmt.Println("Invalid choice! Please enter a number between 1 and 4.")
	}
}
