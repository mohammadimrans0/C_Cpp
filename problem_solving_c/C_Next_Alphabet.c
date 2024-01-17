// Given a lowercase alphabet character. You have to print the next character in the alphabet.

#include<stdio.h>

int main(){
    char l;
    scanf("%c", &l);
    
    if(l >= 'a' && l< 'z'){
        printf("%c\n", l + 1);
    }else if(l = 'z'){
        printf("%c\n", 'a');
    }

    return 0;
}