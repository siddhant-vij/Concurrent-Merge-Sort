package main

import (
	"fmt"
	"math/rand"
	"time"
)

func TimeComparison(arr []int) {
	startTime := time.Now()
	SequentialSort(arr, 0, len(arr)-1)
	endTime := time.Now()
	fmt.Println("Sequential time: ", endTime.Sub(startTime).Milliseconds(), "ms")

	rand.Shuffle(len(arr), func(i, j int) {
		arr[i], arr[j] = arr[j], arr[i]
	})

	startTime = time.Now()
	ConcurrentSort(arr, 0, len(arr)-1)
	endTime = time.Now()
	fmt.Println("Concurrent time: ", endTime.Sub(startTime).Milliseconds(), "ms")
}
