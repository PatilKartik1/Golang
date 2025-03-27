package main

import (
	"fmt"
)

// Define Book structure
type Book struct {
	BookID int
	Title  string
	Author string
	Price  float64
}

// Function to input book details
func inputBooks(n int) []Book {
	books := make([]Book, n) // Create a slice of n books
	for i := 0; i < n; i++ {
		fmt.Printf("\nEnter details of Book %d:\n", i+1)
		fmt.Print("Book ID: ")
		fmt.Scan(&books[i].BookID)
		fmt.Print("Title: ")
		fmt.Scan(&books[i].Title)
		fmt.Print("Author: ")
		fmt.Scan(&books[i].Author)
		fmt.Print("Price: ")
		fmt.Scan(&books[i].Price)
	}
	return books
}

// Function to display book details
func displayBooks(books []Book) {
	fmt.Println("\n📚 Book Details:")
	for _, book := range books {
		fmt.Println("-----------------------------")
		fmt.Println("Book ID:", book.BookID)
		fmt.Println("Title:", book.Title)
		fmt.Println("Author:", book.Author)
		fmt.Println("Price: ₹", book.Price)
	}
}

func main() {
	var n int

	// Accept the number of books
	fmt.Print("Enter the number of books: ")
	fmt.Scan(&n)

	// Input book details
	books := inputBooks(n)

	// Display book details
	displayBooks(books)
}
