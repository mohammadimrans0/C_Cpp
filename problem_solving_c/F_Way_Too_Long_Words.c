#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char a[n];

    for (int i = 0; i < n; i++){
        scanf("%c", &a[i]);
        
    }
    for (int i = 0; i < n; i++){
        printf("%c\n", a[i]);
        
    }
        return 0;
}