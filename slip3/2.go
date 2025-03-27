package main

import (
	"fmt"
)

// Employee structure
type Employee struct {
	eno    int
	ename  string
	salary float64
}

func main() {
	var n int
	fmt.Print("Enter the number of employees: ")
	fmt.Scanln(&n)

	employees := make([]Employee, n)

	// Accept employee records
	for i := 0; i < n; i++ {
		fmt.Println("\nEnter details for Employee", i+1)
		fmt.Print("Employee Number: ")
		fmt.Scanln(&employees[i].eno)
		fmt.Print("Employee Name: ")
		fmt.Scanln(&employees[i].ename)
		fmt.Print("Employee Salary: ")
		fmt.Scanln(&employees[i].salary)
	}

	// Find the maximum salary
	maxSalary := employees[0].salary
	for _, emp := range employees {
		if emp.salary > maxSalary {
			maxSalary = emp.salary
		}
	}

	// Display employee(s) with the maximum salary
	fmt.Println("\nEmployees with Maximum Salary (", maxSalary, "):")
	for _, emp := range employees {
		if emp.salary == maxSalary {
			fmt.Printf("Employee No: %d, Name: %s, Salary: %.2f\n", emp.eno, emp.ename, emp.salary)
		}
	}
}
