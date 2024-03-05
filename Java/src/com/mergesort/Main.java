package com.mergesort;

public class Main {
  private static Integer[] createArray(int n) {
    Integer[] arr = new Integer[n];
    for (int i = 0; i < n; i++) {
      arr[i] = (int) (Math.random() * 1000);
    }
    return arr;
  }

  public static void main(String[] args) {
    System.out.println("Merge Sort");

    System.out.print("Enter the number of elements in the array to be sorted: ");
    int n = Integer.parseInt(System.console().readLine());

    Integer[] arr = createArray(n);
    TimeComparison.timeComparison(arr);
  }
}
// n = 99999999
// Sequential time: 42629 ms
// Concurrent time: 33385 ms