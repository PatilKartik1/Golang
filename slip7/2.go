package main

import (
	"fmt"
)

// Define Student structure
type Student struct {
	rollNo int
	name   string
	marks  float64
}

// Method to display student details (Using Pointer Receiver)
func (s *Student) show() {
	fmt.Println("\nStudent Details:")
	fmt.Println("Roll No:", s.rollNo)
	fmt.Println("Name:", s.name)
	fmt.Println("Marks:", s.marks)
}

func main() {
	// Accept student details
	var s Student
	fmt.Print("Enter Roll No: ")
	fmt.Scan(&s.rollNo)
	fmt.Print("Enter Name: ")
	fmt.Scan(&s.name)
	fmt.Print("Enter Marks: ")
	fmt.Scan(&s.marks)

	// Call show() method to display details
	s.show()
}
