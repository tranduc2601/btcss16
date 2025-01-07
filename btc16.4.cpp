#include <stdio.h>

void printArray(int *arr, int size) {
    printf(" cac phan tu trong mang gom: \n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i)); 
    }
}
int main() {
    int array[] = {1,3,5,7,9,11}; 
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);
    return 0;
}

