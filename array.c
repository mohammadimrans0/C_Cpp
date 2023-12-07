#include<stdio.h>

int main(){
    int ar[5] = {10,20,30,40,50};

    for (int i = 0; i < 5; i++){
        // printf("%d\n", ar[i]);
    }

    // reverse array
    int n;
    scanf("%d", &n);

    int arr[n];

     for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = n-1; i >= 0; i--){
      printf("%d\n", arr[i]);
    }
    
    // sum of an array
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum = sum + arr[i];

    }
    printf("%d", sum);

    return 0;
}