/*
Given a number N and an array A of N numbers. Print the absolute (out will be positive number) summation of these numbers.
*/

#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    long long arr[n]; 

    long long sum = 0;  

    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);  
    }

    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    if(sum < 0){
        sum = sum * (-1);
        printf("%lld\n", sum);  
    }else{
        printf("%lld\n", sum);  
    }

    return 0;
}