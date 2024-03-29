/*
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.
*/

#include<stdio.h>
#include<string.h>
 
int main(){
    char a[50],b[50];
 
    scanf("%s %s",a,b);
 
    int value = strcmp(a, b);
 
    if(value < 0){
        printf("%s", a);
    }else if (value > 0)
    {
        printf("%s", b);
    }else{
        printf("%s", a);
    }
 
    return 0;
}