#include <stdio.h>

int main() {
    int data[10] = {30, 32, 31, 100, 33, 31, 30, 29, 32, 31};
    int window = 3;  // number of values to average
    int i, j;
    float sum, average;

    printf("Original data:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    printf("\nFiltered data:\n");
    for(i = 0; i < 10 - window + 1; i++) {
        sum = 0;
        for(j = 0; j < window; j++) {
            sum += data[i + j];
        }
        average = sum / window;
        printf("%.2f ", average);
    }

    return 0;
}
