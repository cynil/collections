#include <stdio.h>
#define SIZE 10

void main() {
  int nums[SIZE] = {5, 3, 6, 2, 8, 7, 4, 9, 1}
  insert_sort(nums, SIZE);

  for (int i = 0; i < SIZE; i++) {
    printf("%d", nums[i]);
  }
}

void insert_sort(int nums[], int size) {
  for (int i = 1; i < size; i++) {
    int base = nums[i];

    int j = i - 1;

    while (j >= 0 && nums[j] > base) {
        nums[j + 1] = nums[j];
        j--;
    }

    nums[j + 1] = base;
  }
}
