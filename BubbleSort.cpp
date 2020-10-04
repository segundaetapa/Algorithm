#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int n) {
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {

    int n;

    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    BubbleSort(a, n);

    for(int j=0; j<n; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}
