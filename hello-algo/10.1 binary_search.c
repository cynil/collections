#include "stdlib.h"
#include "stdio.h"
#define LEN 10

int binarySearch(int* nums, int len, int target) {
  int i = 0;
  int j = len - 1;

  while (i <= j) {
    int m = i + (j - i) / 2;
    if (nums[m] == target) {
        return m;
    } else if (nums[m] < target) {
        i = m + 1
    } else if (nums[m] > target) {
        j = m - 1
    }
  }
  return -1;
}

void main() {
  int nums[LEN] = { 0, 0, 1, 3, 4, 10, 18, 56, 100, 1000 }

  int pos = binarySearch(nums, LEN, 10)

  printf("%i", pos)
}