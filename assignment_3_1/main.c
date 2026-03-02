#include <stdio.h>
#include <stdlib.h> //required for qsort

int sum(const int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    return totalSum;
}

float average(const int arr[], const int n) {
    float total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += (float)arr[i];
    }
    total_sum = total_sum/(float)n;
    return total_sum;
}

float median(const int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    // sorting numbers
    int arr[10] = {1,5,6,9,3,5,7,4,1,3};
    int n = 10;
    bubblesort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }


    printf("\n Sum of the numbers is %i \n", sum(arr, n));
    printf("Average: %g\n", average(arr, n));
    printf("Highest value numbers is %i \n", arr[n-1]);
    printf("Median of the numbers is %f \n", median(arr, n));


    return 0;
}