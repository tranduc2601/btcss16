#include <stdio.h>
int main() {
    int elm = 26; 
    int *ptr = &elm;
    //c1 
    printf(" c1: \n");
    printf(" gia tri cau bien  %d\n", elm);
    printf(" dai chi cua bien: %p\n", (void*)&elm);
    // c2 
    printf(" c2: \n");
    printf(" gia tro cua bien duoc lay tu con tro la: %d\n", *ptr);
    printf(" dia chi cua bien lay duoc lay tu con tro la: %p\n", (void*)ptr);

    return 0;
}

