#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    int k = 1, s= n-1;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < s; j++){
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        s--;
        k += 2;
        printf("\n");
    }
        return 0;
}