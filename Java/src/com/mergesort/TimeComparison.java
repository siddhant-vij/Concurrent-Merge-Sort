package com.mergesort;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.ForkJoinPool;

public class TimeComparison {
  public static void timeComparison(Integer[] arr) {
    long startTime = System.currentTimeMillis();
    StMergeSort.mergeSort(arr, 0, arr.length - 1);
    long endTime = System.currentTimeMillis();
    System.out.println("Sequential time: " + (endTime - startTime) + "ms");

    List<Integer> list = Arrays.asList(arr);
    Collections.shuffle(list);
    list.toArray(arr);

    try (ForkJoinPool pool = new ForkJoinPool()) {
      startTime = System.currentTimeMillis();
      pool.invoke(new MtMergeSort(arr, 0, arr.length - 1));
    }
    endTime = System.currentTimeMillis();
    System.out.println("Concurrent time: " + (endTime - startTime) + "ms");
  }
}
