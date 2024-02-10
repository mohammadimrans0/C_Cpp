#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    char a[1001], b[1001];
    scanf("%s", &a);
    strcpy(b, a);

    int i = 0, j = strlen(b) - 1;
    while (i<j)
    {
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }

    if(strcmp(a, b) == 0){
        printf("YES Palindrome");
    }else{
        printf("NOT Palindrome");
    }

    return 0;
}