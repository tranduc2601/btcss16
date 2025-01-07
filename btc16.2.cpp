#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 1;
    int y = 2;
    printf(" truoc khi hoan doi: \n");
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    // gtr sau hoan doi 
    printf("sau hoan doi: \n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

