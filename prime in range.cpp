#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 and negative numbers are not prime
    }
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false; // n is divisible by a number other than 1 and itself
        }
    }
    
    return true; // n is prime
}

int main() {
    int lower, upper;
    
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);
    
    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);
    
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    
    return 0;
}
