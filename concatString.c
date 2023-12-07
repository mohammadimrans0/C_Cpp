#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];

    scanf("%s %s",a,b);

    // logically solve korci
    int k = strlen(a);
    for (int i = 0; i <= strlen(b); i++){
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';
    printf("%s %s", a, b);

    // build in function
    strcat(a, b);
    printf("%s", a);

    return 0;
}