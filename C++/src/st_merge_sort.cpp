#include "st_merge_sort.hpp"
#include "merge_utils.hpp"

void StMergeSort::merge_sort(std::vector<int> &vec, size_t start, size_t end)
{
  if (start < end)
  {
    size_t mid = (start + end) / 2;
    merge_sort(vec, start, mid);
    merge_sort(vec, mid + 1, end);
    MergeUtils::merge(vec, start, mid, end);
  }
}