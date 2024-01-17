/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.
*/

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);   
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++){
        if(a[i]< a[minIndex]){
            minIndex = i;
        }

        if(a[i]> a[maxIndex]){
            maxIndex = i;
        }
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    for (int i = 0; i < n; i++){
        
      printf("%d ", a[i]);
    }
    

    return 0;
}