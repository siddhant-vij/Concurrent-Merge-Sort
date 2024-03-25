package main

func Merge(arr []int, start, mid, end int) {
	leftSize := mid - start + 1
	rightSize := end - mid

	leftArr := make([]int, leftSize)
	for i := 0; i < leftSize; i++ {
		leftArr[i] = arr[start+i]
	}
	
	rightArr := make([]int, rightSize)
	for i := 0; i < rightSize; i++ {
		rightArr[i] = arr[mid+1+i]
	}

	i := 0
	j := 0
	k := start

	for i < leftSize && j < rightSize {
		if leftArr[i] < rightArr[j] {
			arr[k] = leftArr[i]
			i++
		} else {
			arr[k] = rightArr[j]
			j++
		}
		k++
	}

	for i < leftSize {
		arr[k] = leftArr[i]
		i++
		k++
	}

	for j < rightSize {
		arr[k] = rightArr[j]
		j++
		k++
	}
}