// Given a number N. Print numbers from 1 to N in separate lines.

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}