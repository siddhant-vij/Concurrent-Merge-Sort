#ifndef SINGLE_THREADED_MERGE_SORT_HPP
#define SINGLE_THREADED_MERGE_SORT_HPP

#include <vector>

class StMergeSort
{
public:
  static void merge_sort(std::vector<int> &vec, size_t start, size_t end);
};

#endif // SINGLE_THREADED_MERGE_SORT_HPP