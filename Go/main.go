package main

import (
	"bufio"
	"fmt"
	"math/rand"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	fmt.Println("Merge Sort")

	fmt.Print("Enter the number of elements in the array to be sorted: ")
	numStr, err := reader.ReadString('\n')
	if err != nil {
		panic(err)
	}
	numInt, err := strconv.Atoi(strings.TrimSpace(numStr))
	if err != nil {
		panic(err)
	}
	arr := createArray(numInt)
	TimeComparison(arr)
}

func createArray(n int) []int {
	array := make([]int, n)
	for i := 0; i < n; i++ {
		array[i] = rand.Intn(1000)
	}
	return array
}


// Merge Sort
// Enter the number of elements in the array to be sorted: 99999999
// Sequential time:  14903 ms
// Concurrent time:  215717 ms

// Could this be due to:
// Overhead of Thread Creation and Management
// Suboptimal Utilization of Hardware (More threads than CPU cores)
// Recursive nature of the algorithm
// Cost of frequent Context Switching
// Will need further profiling!!