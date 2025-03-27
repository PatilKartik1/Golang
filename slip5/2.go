package main

import (
	"fmt"
)

// Employee structure
type Employee struct {
	Eno    int
	Ename  string
	Salary float64
}

func main() {
	var n int

	// Accept number of employees
	fmt.Print("Enter the number of employees: ")
	fmt.Scanln(&n)

	// Create a slice to store employees
	employees := make([]Employee, n)

	// Input employee details
	for i := 0; i < n; i++ {
		fmt.Printf("Enter details for Employee %d (Eno, Ename, Salary):\n", i+1)
		fmt.Scanln(&employees[i].Eno, &employees[i].Ename, &employees[i].Salary)
	}

	// Find the minimum salary
	minSalary := employees[0].Salary
	for i := 1; i < n; i++ {
		if employees[i].Salary < minSalary {
			minSalary = employees[i].Salary
		}
	}

	// Display employees with minimum salary
	fmt.Println("\nEmployees with Minimum Salary:")
	for _, emp := range employees {
		if emp.Salary == minSalary {
			fmt.Printf("Eno: %d, Ename: %s, Salary: %.2f\n", emp.Eno, emp.Ename, emp.Salary)
		}
	}
}
