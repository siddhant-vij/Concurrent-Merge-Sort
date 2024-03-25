package main

import "sync"

func ConcurrentSort(arr []int, start, end int) {
	if start < end {
		mid := (start + end) / 2

		var wg sync.WaitGroup
		wg.Add(1)

		go func() {
			defer wg.Done()
			ConcurrentSort(arr, start, mid)
		}()

		ConcurrentSort(arr, mid+1, end)
		// Better than spawning a new goroutine here?

		wg.Wait()

		Merge(arr, start, mid, end)
	}
}
