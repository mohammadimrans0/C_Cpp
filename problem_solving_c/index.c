#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer N (1 <= N <= 100): ");
    scanf("%d", &n);

    // Validate input
    if (n < 1 || n > 100) {
        printf("Invalid input. N must be between 1 and 100.\n");
        return 1;
    }

    for (int i = 1; i <= 2 * n - 1; i++) {
        // Print spaces
        for (int j = 1; j <= n - 1 + i / 2; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i % 2 == 0 ? 2 * n - i : 1; j++) {
            printf("#");
        }

        if (i != 1 && i != 2 * n - 1) {  // Condition for dashes
            // Corrected calculation for dashes:
            for (int j = 1; j <= 2 * (n - 1 - i / 2); j++) {
                printf("-");
            }
        }

        printf("\n");
    }

    return 0;
}
