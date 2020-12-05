#include <stdio.h>
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

void selection_sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                SWAP(arr[i], arr[j], temp);
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
    selection_sort(arr, size);
    showPrint(arr, size);

    return 0;
}
