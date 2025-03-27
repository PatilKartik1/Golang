package main

import (
	"fmt"
)

// Function to accept a matrix
func inputMatrix(rows, cols int) [][]int {
	matrix := make([][]int, rows)
	for i := range matrix {
		matrix[i] = make([]int, cols)
		for j := range matrix[i] {
			fmt.Printf("Enter element [%d][%d]: ", i+1, j+1)
			fmt.Scan(&matrix[i][j])
		}
	}
	return matrix
}

// Function to compute the transpose of a matrix
func transposeMatrix(matrix [][]int, rows, cols int) [][]int {
	transposed := make([][]int, cols)
	for i := range transposed {
		transposed[i] = make([]int, rows)
		for j := range transposed[i] {
			transposed[i][j] = matrix[j][i]
		}
	}
	return transposed
}

// Function to display a matrix
func displayMatrix(matrix [][]int) {
	for _, row := range matrix {
		for _, val := range row {
			fmt.Printf("%d ", val)
		}
		fmt.Println()
	}
}

func main() {
	var rows, cols int

	// Accepting matrix dimensions
	fmt.Print("Enter the number of rows and columns: ")
	fmt.Scan(&rows, &cols)

	// Accepting matrix elements
	fmt.Println("Enter the matrix elements:")
	matrix := inputMatrix(rows, cols)

	// Compute transpose
	transposed := transposeMatrix(matrix, rows, cols)

	// Display original and transposed matrix
	fmt.Println("\nOriginal Matrix:")
	displayMatrix(matrix)

	fmt.Println("\nTransposed Matrix:")
	displayMatrix(transposed)
}
