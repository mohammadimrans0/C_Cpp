
/*

pattern print:

input : 5

    1
   21
  321
 4321
54321

*/

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int k = 1, s= n-1;

    for (int i = 1; i <= n; i++){

        for (int j = 0; j < s; j++){
            printf(" ");
        }

        for (int j = i; j >= k; j--)
        {
            printf("%d", j);
        }

        s--;
        printf("\n");
    }
        return 0;
}