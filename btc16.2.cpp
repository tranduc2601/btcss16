#include <stdio.h>
int swap(int a, int b) {
    printf(" trong ham swap:\n");
    printf("a = %d, b = %d\n", a, b);
    return a; 
}
int main() {
    int x = 1;
    int y = 2;
    printf(" truoc khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    int temp = x;
    x = swap(y, temp); 
    y = temp;
    printf(" sau khi hoan doi:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

