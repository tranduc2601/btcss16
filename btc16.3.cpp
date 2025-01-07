#include <stdio.h>
void sum(int a, int b, int *result) {
    *result = a + b;
}
int main() {
    int firstNum = 1; 
    int secondNum = 3; 
    int result = 0;        
    sum(firstNum, secondNum, &result);
    printf(" tong cua %d và %d la: %d\n",firstNum, secondNum, result);
    return 0;
}

