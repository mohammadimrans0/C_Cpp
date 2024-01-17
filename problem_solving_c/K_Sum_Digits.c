/*
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char A[N];
    scanf("%s", A);

    long long int sum = 0;

    for (int i = 0; i < N; i++) {
        // printf("%c\n", A[i]);
        sum += (A[i] - '0') ;
    }

    printf("%lld\n", sum);  // Print the sum

    return 0;
}
