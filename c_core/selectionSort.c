#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    // ascending :
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i + 1; j < n; j++){
            if( A[i] > A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // descending :
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i + 1; j < n; j++){
            if( A[i] < A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    return 0;
}