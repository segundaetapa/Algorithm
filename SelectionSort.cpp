// SELECTION SORT
#include <stdio.h>
// 4 10 7 1 2
//        3
// 1 | 10 7 4 2
// 1 2 | 7 4 10
// 1 2 4 | 7 10
// 1 2 4 7 | 10 

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int swap = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = swap;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
