#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define WINDOW 3  // Size of median filter window

// Bubble sort for small arrays
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Apply median filter
void medianFilter(int input[], int output[], int size, int window) {
    int half = window / 2;
    int temp[WINDOW];

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = i - half; j <= i + half; j++) {
            if (j >= 0 && j < size) {
                temp[count++] = input[j];
            }
        }

        bubbleSort(temp, count);
        output[i] = temp[count / 2];  // Median value
    }
}

int main() {
    FILE* file = fopen("log.txt", "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    int readings[MAX], filtered[MAX];
    int count = 0;

    // Read sensor values from file
    while (fscanf(file, "%d", &readings[count]) != EOF && count < MAX) {
        count++;
    }
    fclose(file);

    // Apply the median filter
    medianFilter(readings, filtered, count, WINDOW);

    // Output results
    printf("Filtered sensor readings:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", filtered[i]);
    }

    return 0;
}

