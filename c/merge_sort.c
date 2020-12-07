#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {
   int i, j, k;
   int n1 = middle - left + 1;
   int n2 = right - middle;
   int L[n1], R[n2];
   for (i = 0; i < n1; i++) L[i] = arr[left+i];
   for (j = 0; j < n2; j++) R[j] = arr[middle + 1 + j];
   i = 0;
   j = 0;
   k = left;
   while (i < n1 && j < n2) {
       if (L[i] < R[j]) {
           arr[k] = L[i];
           i++;
       } else {
           arr[k] = R[j];
           j++;
       }
       k++;
   }
   while (i < n1) {
       arr[k] = L[i];
       i++;
       k++;
   }
   while (j < n2) {
       arr[k] = R[j];
       j++;
       k++;
   }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
            mergeSort(arr, left, middle);
            mergeSort(arr, middle + 1, right);
            merge(arr, left, middle, right);
    }
    
}

void showPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main(void) {
    int arr[10] = {5,8,10,4,7,2,9,3,1,6};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, 9);
    showPrint(arr, size);

    return 0;
}
