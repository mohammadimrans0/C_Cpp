#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a = 12;

    for (int i = 1; i <= a; i++){
        
    printf("%d * %d = %d\n",n, i, (n*i) );
    }
    return 0;
}