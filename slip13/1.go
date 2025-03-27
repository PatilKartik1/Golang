package main

import (
	"fmt"
)

func main() {
	evenSum, oddSum := 0, 0

	for i := 1; i <= 100; i++ {
		if i%2 == 0 {
			evenSum += i
		} else {
			oddSum += i
		}
	}

	fmt.Println("Sum of Even Numbers (1 to 100):", evenSum)
	fmt.Println("Sum of Odd Numbers (1 to 100):", oddSum)
}
