#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int N;
    scanf("%d", &N);

    int i, arr[N];

    // Input array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: If there's only one element, no second largest exists
    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int largest = INT_MIN, secondlargest = INT_MIN;

    // Finding the largest and second largest elements
    for (i = 0; i < N; i++) {
        if (arr[i] > largest) {
            secondlargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i]; // Update second largest
        }
    }

    // If secondlargest remains INT_MIN, it means there was no valid second largest
    if (secondlargest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", secondlargest);
    }

    return 0;
}
