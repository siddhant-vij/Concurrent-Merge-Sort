import random
import time

from single_threaded import merge_sort_single_threaded
from multi_threaded import merge_sort_multi_threaded1, merge_sort_multi_threaded2


def time_comparison(arr):
    start_time = time.time()
    result = merge_sort_single_threaded(arr)
    end_time = time.time()
    # print(result)
    print(f"Sequential: {end_time - start_time:.5f}s")

    # random.shuffle(arr)

    # <-------- This is very slow -------->

    # start_time = time.time()
    # result = merge_sort_multi_threaded1(arr)
    # end_time = time.time()
    # # print(result)
    # print(f"Using concurrent.futures: {end_time - start_time:.5f}s")

    random.shuffle(arr)

    start_time = time.time()
    result = merge_sort_multi_threaded2(arr)
    end_time = time.time()
    # print(result)
    print(f"Using multiprocessing: {end_time - start_time:.5f}s")
