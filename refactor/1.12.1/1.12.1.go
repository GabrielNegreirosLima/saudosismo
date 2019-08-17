package main

// This exercise reads ages in loop until
// the last is 0. Than, it does the average
// of the ages

import (
	"fmt"
)

func main() {

	var sum, age, i int = 0, 1, 0

	for i = 0; age != 0; i++ {
		fmt.Print("Hello! Enter your age: ")

		_, err := fmt.Scanf("%d", &age)
		if err != nil {
			return
		}

		sum += age
	}

	fmt.Printf("Average: %v\n", (sum / (i - 1)))
}
