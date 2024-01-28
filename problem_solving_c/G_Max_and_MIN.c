#include<stdio.h>

void min_max(int *A, int n){
    int min_value, max_value;
    min_value = A[0];
    max_value = A[0];

    for (int i = 1; i < n;i++){

        if(A[i] < min_value){
            min_value = A[i];
        }

        if(A[i] > max_value){
            max_value = A[i];
        }
        
    }

    printf("%d %d", min_value, max_value);
}

int main(){
    int n;
    scanf("%d", &n);

    int A[n];

     for (int i = 0; i < n;i++){
        scanf("%d", &A[i]);
    }

    min_max(A, n);

    return 0;
}