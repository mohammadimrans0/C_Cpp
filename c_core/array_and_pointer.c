#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int ar[5] = {10, 20, 30, 40, 50};
    printf("%p\n", &ar[0]);
    printf("%p\n", ar);
    // simply ar == &ar[0]

    printf("%d\n", *ar);
    printf("%d\n", ar[0]);
    // simply *ar == ar[0]
    return 0;
}