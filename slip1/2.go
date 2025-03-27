package main

import (
	"fmt"
)

// Defining a structure for Student
type Student struct {
	RollNo  int
	Name    string
	Mark1   float64
	Mark2   float64
	Mark3   float64
	Total   float64
	Average float64
}

func main() {
	var n int

	fmt.Print("Enter the number of students: ")
	fmt.Scanln(&n)

	students := make([]Student, n)

	for i := 0; i < n; i++ {
		fmt.Printf("\nEnter details for Student %d:\n", i+1)

		fmt.Print("Roll No: ")
		fmt.Scanln(&students[i].RollNo)

		fmt.Print("Name: ")
		fmt.Scanln(&students[i].Name)

		fmt.Print("Enter 3 Marks: ")
		fmt.Scanln(&students[i].Mark1, &students[i].Mark2, &students[i].Mark3)


		students[i].Total = students[i].Mark1 + students[i].Mark2 + students[i].Mark3
		students[i].Average = students[i].Total / 3
	}


	fmt.Println("\nStudent Details:")
	fmt.Println("-----------------------------------------------------")
	fmt.Println("RollNo\tName\t\tMark1\tMark2\tMark3\tTotal\tAverage")
	fmt.Println("-----------------------------------------------------")
	for _, student := range students {
		fmt.Printf("%d\t%-10s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
			student.RollNo, student.Name, student.Mark1, student.Mark2, student.Mark3, student.Total, student.Average)
	}
}
