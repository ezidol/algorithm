#include <stdio.h>
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) =(t))

void bubble_sort(int arr[], int size) {
    int i, j, temp;
    for (i = size; i>=0; i--) {
        for (j = 0; j < i-1; j++ ) {
            if (arr[j] > arr[j+1]) {
                SWAP(arr[j], arr[j+1], temp);
            }
        }
    }
}

void showPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[10] = {4,3,5,6,1,2,8,10,9,7};
    int size = sizeof(arr) / sizeof(int);

    bubble_sort(arr, size);
    showPrint(arr,size);

    return 0;
}
