package main

import (
	"fmt"
	"os"
)

func main() {
	// Define the file name
	fileName := "example.txt"

	// Open the file in append mode, create if it doesn't exist
	file, err := os.OpenFile(fileName, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0644)
	if err != nil {
		fmt.Println("Error opening file:", err)
		return
	}
	defer file.Close() // Ensure file is closed after operation

	// Content to append
	newContent := "This is new appended content.\n"

	// Write content to file
	_, err = file.WriteString(newContent)
	if err != nil {
		fmt.Println("Error writing to file:", err)
		return
	}

	fmt.Println("Content appended successfully!")
}
