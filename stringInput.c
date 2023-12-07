#include<stdio.h>
#include<string.h>

int main(){
    char a[18];
    fgets(a, 18, stdin);

    printf("%s\n", a);

    // length of a string
    int stringLength = strlen(a);
    printf("%d\n", stringLength);

    return 0;
}