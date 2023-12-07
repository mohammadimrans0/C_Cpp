#include<stdio.h>

int main(){
    int a = 1000000000;
    long long int b = 100000000000000;

    printf("%d" "%lld", a, b);

    float c = 1.000000000;
    double d = 1.000000000000000000;

    printf("%f" "%0.15lf", c, d);
    return 0;
}