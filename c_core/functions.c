#include<stdio.h>
#include<string.h>
#include<math.h>

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int result = sum(a, b);
    printf("%d", result);

    // some built in function

    // Input should be taken in double data type. Integer won't provide correct value.

    double x;
    scanf("%lf", &x);

    // will return the ceiling value of an input
    int ans_ceil = ceil(x);
    printf("%d\n", ans_ceil);

    // will return the floor value of an input
    int ans_floor = floor(x);
    printf("%d\n", ans_floor);

    // will return the round (>= o.5 will return ceil value and < 0.5 will return floor value) value of an input
    int ans_round = round(x);
    printf("%d\n", ans_round);

    

    // will return the square root value of an input
    double s;
    scanf("%lf", &s);

    double ans_squareRoot = sqrt(s);
    printf("%0.2lf\n", ans_squareRoot);

    // will return the power value (i^j) of an input
    int i, j;
    scanf("%d %d", &i, &j);

    int ans_pow = pow(i, j);
    printf("%d\n", ans_pow);

    return 0;
}