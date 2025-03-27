package main

import "fmt"

// Function to return multiple values
func calculate(num1, num2 int) (int, int, int, float64) {
    sum := num1 + num2
    difference := num1 - num2
    product := num1 * num2
    quotient := float64(num1) / float64(num2) // Typecasting to float

    return sum, difference, product, quotient
}

func main() {
    // Accepting values from the user
    var a, b int
    fmt.Print("Enter two numbers: ")
    fmt.Scan(&a, &b)

    // Calling function and receiving multiple return values
    sum, diff, prod, quot := calculate(a, b)

    // Displaying the results
    fmt.Println("Sum:", sum)
    fmt.Println("Difference:", diff)
    fmt.Println("Product:", prod)
    fmt.Println("Quotient:", quot)
}


