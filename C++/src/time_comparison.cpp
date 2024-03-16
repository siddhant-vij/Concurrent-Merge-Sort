#include "time_comparison.hpp"
#include "st_merge_sort.hpp"
#include "mt_merge_sort.hpp"
#include <random>
#include <chrono>
#include <iostream>

void TimeComparison::compare(std::vector<int> &vec)
{
  auto start = std::chrono::high_resolution_clock::now();
  StMergeSort::merge_sort(vec, 0, vec.size() - 1);
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> sequentialTime = end - start;
  std::cout << "Sequential time: " << sequentialTime.count() << "ms\n";

  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(vec.begin(), vec.end(), g);

  start = std::chrono::high_resolution_clock::now();
  MtMergeSort::merge_sort(vec, 0, vec.size() - 1);
  end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> concurrentTime = end - start;
  std::cout << "Concurrent time: " << concurrentTime.count() << "ms\n";
}