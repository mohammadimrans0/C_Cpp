#include <math.h>
#include <stdio.h>
#include <string.h>


int main() {
  char a[1001];
  scanf("%s", a);

  int flag = 1;
  int i = 0, j = strlen(a) - 1;
  while (i < j) {
    if (a[i] != a[j]) {
      flag = 0;
      break;
    }
    i++;
    j--;
  }

  if (flag == 0) {
    printf("NO");
  } else {
    printf("YES");
  }

  return 0;
}