#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows for the diamond star pattern: ");
    scanf("%d", &rows);

    printf("Diamond Star Pattern:\n");

    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces before stars
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
