#ifndef MERGE_UTILS_HPP
#define MERGE_UTILS_HPP

#include <vector>

class MergeUtils
{
public:
  static void merge(std::vector<int> &vec, size_t low, size_t mid, size_t high);
};

#endif // MERGE_UTILS_HPP