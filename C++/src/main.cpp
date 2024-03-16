#include "time_comparison.hpp"
#include <vector>
#include <iostream>

std::vector<int> createArray(std::size_t n)
{
  std::vector<int> arr(n);
  for (std::size_t i = 0; i < n; ++i)
  {
    arr[i] = static_cast<int>(std::rand() % 1000);
  }
  return arr;
}

int main()
{
  std::cout << "Merge Sort" << std::endl;

  std::cout << "Enter the number of elements in the array to be sorted: ";
  std::size_t n{0};
  std::cin >> n;

  std::vector<int> vec = createArray(n);
  TimeComparison::compare(vec);

  return 0;
}

// Merge Sort
// Enter the number of elements in the array to be sorted : 99999
// Sequential time : 56.6655ms
// Concurrent time : 30973.6ms

// Could this be due to:
// Overhead of Thread Creation and Management
// Suboptimal Utilization of Hardware (More threads than CPU cores)
// Recursive nature of the algorithm
// Cost of frequent Context Switching
// Manually managing threads. Threadpooling? 