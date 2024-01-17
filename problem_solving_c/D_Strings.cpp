/*
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
*/

#include<stdio.h>
#include<string.h>
 
int main(){
    char a[11],b[11];
 
    scanf("%s %s",a,b);

    int val_a = strlen(a);
    int val_b = strlen(b);
    printf("%d %d\n", val_a, val_b);

    // strcat(a, b); // it creating a new array of char and it causes a problem on the next operation.
    
    printf("%s%s\n", a, b);

     // Swap the first characters of A and B and print the results
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}