#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle:\n");

    for (int i = 0; i < rows; i++) {
        int number = 1;

        // Print spaces before numbers
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            // Print the number
            printf("%4d", number);

            // Calculate the next number
            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
