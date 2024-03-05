from merge_utils import merge


def merge_sort_single_threaded(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left = merge_sort_single_threaded(arr[:mid])
    right = merge_sort_single_threaded(arr[mid:])

    return merge(left, right)
