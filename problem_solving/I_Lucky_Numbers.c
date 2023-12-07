/*
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.
*/

#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int firstDigit = a / 10;

    int secondDigit = a % 10;

    if(secondDigit % firstDigit == 0 || firstDigit % secondDigit == 0 || firstDigit * secondDigit == 0)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}