package main

import (
	"fmt"
	"math"
)

// Define Shape interface
type Shape interface {
	Area() float64
	Perimeter() float64
}

// Define Circle struct
type Circle struct {
	Radius float64
}

// Implement Shape methods for Circle
func (c Circle) Area() float64 {
	return math.Pi * c.Radius * c.Radius
}

func (c Circle) Perimeter() float64 {
	return 2 * math.Pi * c.Radius
}

// Define Rectangle struct
type Rectangle struct {
	Length, Width float64
}

// Implement Shape methods for Rectangle
func (r Rectangle) Area() float64 {
	return r.Length * r.Width
}

func (r Rectangle) Perimeter() float64 {
	return 2 * (r.Length + r.Width)
}

// Function to display shape details
func displayShapeDetails(s Shape) {
	fmt.Println("Area:", s.Area())
	fmt.Println("Perimeter:", s.Perimeter())
}

func main() {
	var choice int
	fmt.Println("Choose a shape: 1. Circle  2. Rectangle")
	fmt.Scan(&choice)

	switch choice {
	case 1:
		var radius float64
		fmt.Print("Enter Radius of Circle: ")
		fmt.Scan(&radius)
		circle := Circle{Radius: radius}
		displayShapeDetails(circle)

	case 2:
		var length, width float64
		fmt.Print("Enter Length and Width of Rectangle: ")
		fmt.Scan(&length, &width)
		rectangle := Rectangle{Length: length, Width: width}
		displayShapeDetails(rectangle)

	default:
		fmt.Println("Invalid choice! Please enter 1 or 2.")
	}
}
