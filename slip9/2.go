package main

import (
	"fmt"
)

// Define Shape interface
type Shape interface {
	Area() float64
	Volume() float64
}

// Define Square struct
type Square struct {
	Side float64
}

// Implement Shape methods for Square
func (s Square) Area() float64 {
	return s.Side * s.Side
}

func (s Square) Volume() float64 {
	// Square is 2D, so volume is 0
	return 0
}

// Define Rectangle struct
type Rectangle struct {
	Length, Width, Height float64
}

// Implement Shape methods for Rectangle
func (r Rectangle) Area() float64 {
	return r.Length * r.Width
}

func (r Rectangle) Volume() float64 {
	return r.Length * r.Width * r.Height
}

// Function to display shape details
func displayShapeDetails(s Shape) {
	fmt.Println("Area:", s.Area())
	fmt.Println("Volume:", s.Volume())
}

func main() {
	var choice int
	fmt.Println("Choose a shape: 1. Square  2. Rectangle")
	fmt.Scan(&choice)

	switch choice {
	case 1:
		var side float64
		fmt.Print("Enter Side of Square: ")
		fmt.Scan(&side)
		square := Square{Side: side}
		displayShapeDetails(square)

	case 2:
		var length, width, height float64
		fmt.Print("Enter Length, Width, and Height of Rectangle: ")
		fmt.Scan(&length, &width, &height)
		rectangle := Rectangle{Length: length, Width: width, Height: height}
		displayShapeDetails(rectangle)

	default:
		fmt.Println("Invalid choice! Please enter 1 or 2.")
	}
}
