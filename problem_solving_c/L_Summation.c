#include <stdio.h>

int print_summation(int a[], int n, int i) {
  if (i == n) {
    return 0;
  }
  return a[i] + print_summation(a, n, i + 1);
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int result = print_summation(a, n, 0);
  printf("%d\n", result);

  return 0;
}