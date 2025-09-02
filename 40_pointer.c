#include <stdio.h>

int main() {
    int a = 10;      // normal variable
    int *p;          // pointer variable

    p = &a;          // store address of 'a' in pointer 'p'

    printf("Value of a: %d\n", a);
    printf("Address of a: %d\n", &a);
    printf("Pointer p (holds address of a): %d\n", p);
    printf("Value pointed by p: %d\n", *p);

    return 0;
}
