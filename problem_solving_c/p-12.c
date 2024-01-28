// palindrome

#include <stdio.h>
#include <string.h>

int is_palindrome(char *S) {
    int len = strlen(S);
    for (int i = 0; i < len / 2; i++) {
        if (S[i] != S[len - i - 1]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char S[1001]; 
    scanf("%s", S);

    int result = is_palindrome(S);
    if (result) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
