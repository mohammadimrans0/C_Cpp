#include<stdio.h>
#include<string.h>
#include<math.h>

void print_one_to_five(int i){
    if (i==6) return;

    printf("%d ", i);
    print_one_to_five(i+1);
}


void print_five_to_one(int i){
    if (i==0) return;

    printf("%d ", i);
    print_five_to_one(i - 1);
}

void print_five_to_one_using_reverse_recursion(int i){
    if (i==6) return;
    print_five_to_one_using_reverse_recursion(i+1);
    printf("%d ", i);
    
}

void print_array(int *ar, int n, int i){
    if(i == n) return;
    printf("%d ", ar[i]);
    print_array(ar, n, i+1);
}

int string_length(char *a, int i){
    if(a[i] == '\0') return 0;

    int l = string_length(a, i + 1);
    return l + 1;
}

int main(){
    print_one_to_five(1);
    printf("\n");

    print_five_to_one(5);
    printf("\n");

    print_five_to_one_using_reverse_recursion(1);
    printf("\n");

    int ar[5] = {10, 20, 30, 40, 50};
    print_array(ar, 5, 0);
    printf("\n");

    char a[17] = "hello_hi_bye_bye";
    int length = string_length(a, 0);
    printf("%d\n", length);
    printf("\n");

    return 0;
}