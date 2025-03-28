package main

import "fmt"

// Function that returns multiple values (Addition, Subtraction, Multiplication, Division)
func calculate(a, b float64) (float64, float64, float64, float64) {
    add := a + b
    subtract := a - b
    multiply := a * b
    var divide float64
    if b != 0 {
        divide = a / b
    } else {
        divide = 0 // Handle division by zero
    }
    return add, subtract, multiply, divide
}

func main() {
    var num1, num2 float64

    // Taking user input
    fmt.Print("Enter first number: ")
    fmt.Scanln(&num1)
    fmt.Print("Enter second number: ")
    fmt.Scanln(&num2)

    // Calling function and storing multiple return values
    sum, diff, prod, quot := calculate(num1, num2)

    // Displaying results
    fmt.Println("\nResults:")
    fmt.Println("Addition:", sum)
    fmt.Println("Subtraction:", diff)
    fmt.Println("Multiplication:", prod)
    fmt.Println("Division:", quot)
}
