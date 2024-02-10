#include<stdio.h>
#include<limits.h>

int max_number(int a[], int n, int i){
    // base case
    if(i==n){
        return INT_MIN;
    }
    int max = max_number(a, n, i + 1);

    if(a[i] > max){
        return a[i];
    }else{
        return max;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }

    int max = max_number(a, n, 0);
    printf("%d\n", max);
    return 0;
}