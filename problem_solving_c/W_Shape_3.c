#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    int k = 1, s= n-1;

    for (int i = 1; i <= (2*n); i++){

        for (int j = 0; j < s; j++){
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        if(i<= n-1){
            s--;
            k += 2;
        }else if (i == n)
        {
            s = 0;
            k = (2 * n) - 1;
        } 
        else{
            s++;
            k -= 2;
        }

        printf("\n");
    }
        return 0;
}