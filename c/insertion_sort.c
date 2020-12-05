#include <stdio.h>
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

void insertion_sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        j = i + 1;
        while (j > 0 && arr[j-1] > arr[j] ) {
            SWAP(arr[j-1], arr[j], temp);
            j--;
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
    int arr[10] = {3,5,2,7,9,10,1,4,6,8};
    int size = sizeof(arr) / sizeof(int);

    insertion_sort(arr, size);
    showPrint(arr, size);

    return 0;
}
