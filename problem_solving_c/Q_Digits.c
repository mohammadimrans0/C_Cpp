/*
Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.
*/

#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);

    for (int t = 1; t <= test; t++){

    // that's the actual task    
    int n;
    scanf("%d", &n);
    do
    {
        printf("%d ", (n % 10));
        n = n / 10;
    } while (n != 0);

    printf("\n");

    }
    
    return 0;
}