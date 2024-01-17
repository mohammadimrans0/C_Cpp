/*
Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N, M (1≤N≤1051≤M≤105).

Second line contains N numbers (1≤Ai≤M)

Output
Print M lines, the ith line should contain number of times that the number i
 appears in A
*/

#include<stdio.h>
#include<string.h>

int main(){
    int N,M;
    scanf("%d %d", &N, &M);

    int A[N];

    int count[M + 1];
    for (int i = 0; i <= M; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++){
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= M;i++){
        printf("%d\n", count[i]);
    }

        return 0;
}