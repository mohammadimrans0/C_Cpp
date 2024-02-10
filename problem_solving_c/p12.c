#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int m, a, b, c, missing_number;
    scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

    if (m == 0 && (a == 0 || b == 0 || c == 0)) {
      missing_number = 0;
    } else if (m % (a * b * c) == 0) {
      missing_number = m / (a * b * c);
    } else {
      missing_number = -1;
    }

    printf("%lld\n", missing_number);
  }

  return 0;
}