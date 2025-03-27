package main

import (
	"fmt"
	"os"
)

func main() {
	var fileName string
	fmt.Print("Enter the file name: ")
	fmt.Scanln(&fileName)

	// Get file info
	fileInfo, err := os.Stat(fileName)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	// Display file information
	fmt.Println("\nFile Information:")
	fmt.Println("----------------------------")
	fmt.Println("File Name:      ", fileInfo.Name())
	fmt.Println("Size (bytes):   ", fileInfo.Size())
	fmt.Println("Permissions:    ", fileInfo.Mode())
	fmt.Println("Last Modified:  ", fileInfo.ModTime())
	fmt.Println("Is Directory?   ", fileInfo.IsDir())
}
