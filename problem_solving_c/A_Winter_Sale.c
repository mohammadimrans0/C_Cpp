#include <stdio.h>

int main() {
  int n;
  float x, original_price;
  scanf("%d %f", &n, &x);

  original_price = x / (1 - (float)n / 100);

  printf("%.2f\n", original_price);

  return 0;
}