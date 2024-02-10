#include <math.h>
#include <stdio.h>
#include <string.h>


long long int factorial(long long int n) {
  // base case
  if (n == 0) {
    return 1;
  }

  long long int ans = factorial(n - 1);
  return ans * n;
}

int main() {
  long long int n;
  scanf("%lld", &n);
  long long int ans = factorial(n);
  printf("%lld", ans);

  return 0;
}