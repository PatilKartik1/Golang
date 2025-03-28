// File: geometry/rectangle.go
package geometry

// Function to calculate the area of a rectangle
func Area(length, width float64) float64 {
    return length * width
}

// File: main.go
package main

import (
    "fmt"
    "geometry" // Importing our user-defined package
)

func main() {
    var length, width float64

    // Taking user input
    fmt.Print("Enter length of the rectangle: ")
    fmt.Scan(&length)
    fmt.Print("Enter width of the rectangle: ")
    fmt.Scan(&width)

    // Using the Area function from our package
    area := geometry.Area(length, width)

    // Displaying the result
    fmt.Printf("The area of the rectangle is: %.2f\n", area)
}

//Ensure both main.go and geometry/rectangle.go are in the same directory.
//In the terminal, navigate to the folder and execute: