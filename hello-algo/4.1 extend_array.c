
#include <stdlib.h>

int *extend(int *nums, int size, int enlarge) {
  int *res = (int *)malloc(sizeof(int) * (size + enlarge));

  for (int i = 0; i < size; i++) {
    res[i] = nums[i];
  }

  for (int j = size; j < size + enlarge; j++) {
    res[j] = 0;
  }

  return res;
}
