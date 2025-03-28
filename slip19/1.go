package main

import "fmt"

// Function that returns multiple values (addition and subtraction)
func calculate(a int, b int) (int, int) {
    sum := a + b
    difference := a - b
    return sum, difference
}

func main() {
    var num1, num2 int

    // Taking user input
    fmt.Print("Enter first number: ")
    fmt.Scan(&num1)
    fmt.Print("Enter second number: ")
    fmt.Scan(&num2)

    // Calling function and storing multiple returned values
    add, sub := calculate(num1, num2)

    // Displaying the results
    fmt.Println("Addition:", add)
    fmt.Println("Subtraction:", sub)
}
