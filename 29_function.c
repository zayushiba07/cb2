#include <stdio.h>

int add(int no1, int no2) {
    return no1 + no2;
}

int sub(int no1, int no2) {
    return no1 - no2;
}

int main() {
    printf("%d\n", add(250, 60));           
    printf("%d\n", add(350, 110));         
    printf("subtraction is: %d\n", sub(90, 110)); 
    printf("%d\n", sub(800, 110));         
    return 0;
}