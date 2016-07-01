#include "sort2.h"

void sort2(int *a, int n) {
  if (n == 0)
    return;

  int i, c, r = n-1, len;
  int *temp = (int*)malloc(n * sizeof(int));

  for (i = 1, c = 0; i < n; i++) {
    if (a[i] < a[0])
      temp[c++] = a[i];
    else if (a[i] >= a[0])
      temp[r--] = a[i];
  }

  len = c;
  temp[c++] = a[0];

  for (i = 0; i < n; i++)
    a[i] = temp[i];

  sort2(a, len);
  sort2(a + len + 1, n - len - 1);
}