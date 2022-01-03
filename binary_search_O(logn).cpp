#include <stdio.h>

int main() {
  int a[19] = {1, 4, 7, 10, 22, 34, 56, 103, 560, 1220, 2556, 4242, 11023, 323044, 325034, 999111, 1024576, 1555555, 2000000};
  size_t n = sizeof(a) / sizeof(a[0]);
  int left = 0, right = n - 1;
  int middle = (left+right)/2, value = 4242;
  int ck;

  while (a[middle] != value && left < right) {
    if (value < a[middle]) {
      right = middle - 1;
    } else {
      left = middle + 1;
    }

    middle = (left + right) / 2;
    printf("%d ", middle);
  }

  printf("\n");
  ck = middle;

  if (a[middle] != value) {
    ck = -1;
  }

  printf("Value is in position: %d\n", ck);
  return 0;
}

