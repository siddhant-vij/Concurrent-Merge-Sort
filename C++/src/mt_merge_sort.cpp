#include "mt_merge_sort.hpp"
#include "merge_utils.hpp"
#include <thread>

void MtMergeSort::merge_sort(std::vector<int> &vec, size_t start, size_t end)
{
  if (start < end)
  {
    size_t mid = (start + end) / 2;

    std::thread left(MtMergeSort::merge_sort, std::ref(vec), start, mid);
    std::thread right(MtMergeSort::merge_sort, std::ref(vec), mid + 1, end);

    left.join();
    right.join();

    MergeUtils::merge(vec, start, mid, end);
  }
}