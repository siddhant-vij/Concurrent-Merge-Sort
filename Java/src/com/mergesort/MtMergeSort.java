package com.mergesort;

import java.util.concurrent.RecursiveAction;

public class MtMergeSort extends RecursiveAction {
  private Integer[] arr;
  private int start;
  private int end;

  MtMergeSort(Integer[] arr, int start, int end) {
    this.arr = arr;
    this.start = start;
    this.end = end;
  }

  @Override
  protected void compute() {
    if (start < end) {
      int mid = start + (end - start) / 2;
      invokeAll(new MtMergeSort(arr, start, mid), new MtMergeSort(arr, mid + 1, end));
      MergeUtils.merge(arr, start, mid, end);
    }
  }
}
