#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int x = 10;

    int *p = &x;
    printf("%p\n", p);

    // dereference
    printf("%d\n", *p);

    // set value of x using pointer.
    *p = 500;
    printf("%d\n", x);
    printf("%d\n", *p);
    // just simply x == *p ; and only p is the address of x.

    return 0;
}