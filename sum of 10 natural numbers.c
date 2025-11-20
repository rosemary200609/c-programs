#include <stdio.h>

int main() {
    int i, sum = 0;

    printf("First 10 natural numbers:\n");

    for(i = 1; i <= 10; i++) {
        printf("%d ", i);
        sum = sum + i;   
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
