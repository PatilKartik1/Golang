package main

import (
    "fmt"
    "io/ioutil"
    "os"
)

func main() {
    // Specify the file name
    fileName := "example.txt"

    // Open file in read-only mode
    file, err := os.Open(fileName)
    if err != nil {
        fmt.Println("Error opening file:", err)
        return
    }
    defer file.Close() // Ensure file is closed after function execution

    // Read the file content
    content, err := ioutil.ReadAll(file)
    if err != nil {
        fmt.Println("Error reading file:", err)
        return
    }

    // Display file content
    fmt.Println("File Content:\n", string(content))
}
