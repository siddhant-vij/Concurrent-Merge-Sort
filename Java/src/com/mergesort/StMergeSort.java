package com.mergesort;

public class StMergeSort {
  public static void mergeSort(Integer[] arr, int start, int end) {
    if (start < end) {
      int mid = start + (end - start) / 2;
      mergeSort(arr, start, mid);
      mergeSort(arr, mid + 1, end);
      MergeUtils.merge(arr, start, mid, end);
    }
  }
}
