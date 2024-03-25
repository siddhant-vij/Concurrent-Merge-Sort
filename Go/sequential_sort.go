package main

func SequentialSort(arr []int, start, end int) {
	if start < end {
		mid := (start + end) / 2
		SequentialSort(arr, start, mid)
		SequentialSort(arr, mid+1, end)
		Merge(arr, start, mid, end)
	}
}
