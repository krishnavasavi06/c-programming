#include <stdio.h>

int main() {
    int N, sumEven = 0, sumOdd = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            // i is even
            sumEven += i;
        } else {
            // i is odd
            sumOdd += i;
        }
    }

    printf("Sum of even numbers from 1 to %d is %d\n", N, sumEven);
    printf("Sum of odd numbers from 1 to %d is %d\n", N, sumOdd);

    return 0; // Exit the program successfully
}
