/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).
*/

#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);  
    }

    int position, min = INT_MAX;

    for (int i = 0; i < n; i++){

    if(arr[i] < min){
        min = arr[i];
        position = i + 1;
    }
    }
    printf("%d %d\n", min, position);
    
    return 0;
}