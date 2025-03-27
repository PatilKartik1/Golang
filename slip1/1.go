package main

import (
	"fmt"
)

func main() {
	var num1, num2 float64
	var choice int

	fmt.Println("Enter two numbers:")
	fmt.Scanln(&num1, &num2)

	fmt.Println("Choose an operation:")
	fmt.Println("1. Addition (+)")
	fmt.Println("2. Subtraction (-)")
	fmt.Println("3. Multiplication (*)")
	fmt.Println("4. Division (/)")
	fmt.Scanln(&choice)

	switch choice {
	case 1:
		fmt.Printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1+num2)
	case 2:
		fmt.Printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1-num2)
	case 3:
		fmt.Printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1*num2)
	case 4:
		if num2 != 0 {
			fmt.Printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1/num2)
		} else {
			fmt.Println("Error: Division by zero is not allowed!")
		}
	default:
		fmt.Println("Invalid choice! Please enter a number between 1 and 4.")
	}
}
