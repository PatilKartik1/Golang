package main

import (
	"fmt"
)

// Function to input a matrix
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

// Function to multiply two matrices
func multiplyMatrices(A [][]int, B [][]int, r1, c1, c2 int) [][]int {
	result := make([][]int, r1)
	for i := range result {
		result[i] = make([]int, c2)
		for j := range result[i] {
			for k := 0; k < c1; k++ {
				result[i][j] += A[i][k] * B[k][j]
			}
		}
	}
	return result
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
	var r1, c1, r2, c2 int

	// Accepting dimensions for the first matrix
	fmt.Print("Enter rows and columns for the first matrix: ")
	fmt.Scan(&r1, &c1)

	// Accepting dimensions for the second matrix
	fmt.Print("Enter rows and columns for the second matrix: ")
	fmt.Scan(&r2, &c2)

	// Check matrix multiplication rule
	if c1 != r2 {
		fmt.Println("Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix.")
		return
	}

	// Accepting matrices
	fmt.Println("Enter elements for the first matrix:")
	A := inputMatrix(r1, c1)

	fmt.Println("Enter elements for the second matrix:")
	B := inputMatrix(r2, c2)

	// Multiplying matrices
	result := multiplyMatrices(A, B, r1, c1, c2)

	// Displaying the result
	fmt.Println("\nResultant Matrix after Multiplication:")
	displayMatrix(result)
}
