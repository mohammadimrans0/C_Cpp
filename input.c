#include <stdio.h>

int main(){
    
    int tahera, imran;
    char c;
    float f;

    scanf("%d %d %c %f", &tahera, &imran, &c, &f); // scanf is used to get input

    printf("%d %d %c %0.2f", imran, tahera, c, f);

    // inputting %

    int a, b;

    scanf("%d%% %d%%", &a, &b);

    printf("%d%% %d%%", a, b);

    return 0;
}