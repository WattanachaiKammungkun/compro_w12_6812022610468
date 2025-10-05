#include <stdio.h>

// ฟังก์ชัน swap โดยใช้ pointer

void swap(int *a, int *b) {

    int temp = *a;

    *a = *b;

    *b = temp;

}

int main() {

    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);   // เรียกใช้ฟังก์ชัน swap

    printf("After  swap: a = %d, b = %d\n", a, b);
    
    return 0;

}