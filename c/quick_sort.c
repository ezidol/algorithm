#include <stdio.h>
#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

void quick_sort(int arr[], int left, int right) {
    if (left >= right) return;
    int i, j, p, temp;
    p = left;
    i = left + 1;
    j = right;
    while (i <= j) {
        while (i <= right && arr[i] <= arr[p]) i++;
        
        while (j > left && arr[j] >= arr[p]) j--;        
        if (i <= j) {
            SWAP(arr[i], arr[j], temp);
        } else {
            SWAP(arr[j], arr[p], temp);
        }
    }
    quick_sort(arr, left, j-1);
    quick_sort(arr, j+1, right);
}
void showPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void) {
    int arr[10] = {5,4,10,8,2,9,3,1,6,7};
    int size = sizeof(arr) / sizeof(int);

    quick_sort(arr, 0, size -1);
    showPrint(arr, size);

    return 0;
}

