#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the rhombus star pattern: ");
    scanf("%d", &rows);

    printf("Rhombus Star Pattern:\n");

    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= rows; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
