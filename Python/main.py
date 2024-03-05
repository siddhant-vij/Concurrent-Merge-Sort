from typing import List

import random

from time_comparison import time_comparison


def create_array(n: int) -> List[int]:
    arr: List[int] = [None] * n
    for i in range(n):
        arr[i] = int(random.random() * 1000)
    return arr


def run() -> None:
    print("Merge Sort")

    n: int = int(
        input("Enter the number of elements in the array to be sorted: "))

    arr: List[int] = create_array(n)
    time_comparison(arr)


if __name__ == "__main__":
    run()

# n = 9999999
# Sequential: 85.06903s
# Using multiprocessing: 46.00415s
