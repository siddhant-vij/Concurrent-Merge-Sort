#ifndef MULTI_THREADED_MERGE_SORT_HPP
#define MULTI_THREADED_MERGE_SORT_HPP

#include <vector>

class MtMergeSort
{
public:
  static void merge_sort(std::vector<int> &vec, size_t start, size_t end);
};

#endif // MULTI_THREADED_MERGE_SORT_HPP