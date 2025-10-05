#include <stdio.h>

int main() {

    int x = 10;

    int *ptr;

    ptr = &x;   // กำหนดให้ ptr ชี้ไปที่ x

    printf("Before: x = %d\n", x);

    *ptr = 20;  // ใช้ pointer เปลี่ยนค่า x เป็น 20

    printf("After:  x = %d\n", x);

    return 0;

}