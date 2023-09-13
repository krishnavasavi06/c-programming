#include <stdio.h>

int main() {
    int arr[] = {12, 45, 3, 67, 89, 5, 34, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size == 0) {
        printf("Array is empty.\n");
        return 1;
    }

    int max = arr[0]; // Initialize max with the first element
    int min = arr[0]; // Initialize min with the first element

    // Find the maximum and minimum elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
