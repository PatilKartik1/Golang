package main

import (
	"fmt"
	"os"
)

func main() {
	// Define the file name
	fileName := "sample.txt"

	// Create a new text file
	file, err := os.Create(fileName)
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}
	defer file.Close() // Ensure file is closed when done

	// Write content to the file
	_, err = file.WriteString("Hello, this is a sample text file created using Go!")
	if err != nil {
		fmt.Println("Error writing to file:", err)
		return
	}

	fmt.Println("File created successfully:", fileName)
}
