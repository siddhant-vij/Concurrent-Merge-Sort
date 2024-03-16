#include "merge_utils.hpp"

void MergeUtils::merge(std::vector<int> &vec, size_t start, size_t mid, size_t end)
{
  size_t n1 = mid - start + 1;
  size_t n2 = end - mid;

  std::vector<int> vec1(n1);
  std::vector<int> vec2(n2);

  for (size_t i = 0; i < n1; i++)
  {
    vec1[i] = vec[start + i];
  }

  for (size_t i = 0; i < n2; i++)
  {
    vec2[i] = vec[mid + 1 + i];
  }

  size_t i = 0;
  size_t j = 0;
  size_t k = start;

  while (i < n1 && j < n2)
  {
    if (vec1[i] <= vec2[j])
    {
      vec[k] = vec1[i];
      i++;
    }
    else
    {
      vec[k] = vec2[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    vec[k] = vec1[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    vec[k] = vec2[j];
    j++;
    k++;
  }
}
