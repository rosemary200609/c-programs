#include <stdio.h>

int main() {
    int num = 10;       
    int *ptr;           

    ptr = &num;         

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);

    printf("Pointer ptr holds address = %p\n", ptr);
    printf("Value accessed through pointer = %d\n", *ptr);

    return 0;
}