from concurrent.futures import ThreadPoolExecutor
from multiprocessing import Pool

from merge_utils import merge
from single_threaded import merge_sort_single_threaded


def merge_sort_multi_threaded1(arr):
    if len(arr) <= 1:
        return arr

    with ThreadPoolExecutor() as executor:
        mid = len(arr) // 2
        left_future = executor.submit(merge_sort_multi_threaded1, arr[:mid])
        right_future = executor.submit(merge_sort_multi_threaded1, arr[mid:])

        left = left_future.result()
        right = right_future.result()

    return merge(left, right)


def merge_sort_multi_threaded2(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    with Pool() as pool:
        left, right = pool.map(merge_sort_single_threaded, [
                               arr[:mid], arr[mid:]])

    return merge(left, right)
