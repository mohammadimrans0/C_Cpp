#include<stdio.h>
#include<string.h>
#include<math.h>

void char_to_ascii(char a){
    printf("Ascii value of this character is: %d\n", a);
}

void small_to_capital(char a){
    printf("Capital letter: %c\n", a - 32);
}

void capital_to_small(char c){
    printf("Small letter: %c\n", c + 32);
}

int main(){

    char a;
    scanf("%c", &a);
    
    char_to_ascii(a);
    small_to_capital(a);

    char c;
    scanf("%c", &c);
    capital_to_small(c);

    return 0;
}