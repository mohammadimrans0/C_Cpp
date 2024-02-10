#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m= n;
    int a[n][m];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int main_diagonal = 0;
    int secondary_diagonal = 0;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m; j++){
            if(i==j){
                main_diagonal += a[i][j];
            }

            if(i+j == n-1){
                secondary_diagonal += a[i][j];
            }
        }
    }

    int result = main_diagonal - secondary_diagonal;

    if(result < 0){
        result *= -1;
    }

    printf("%d", result);
    return 0;
}