#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int firstNum = 1;
    int secondNum = 3;
    int result = sum(firstNum, secondNum);
    printf(" tong cua %d v� %d la: %d\n", firstNum, secondNum, result);
    return 0;
}

