#include <stdio.h>

#define POWER(base, exp) ({               \
    int result = 1;                       \
    for (int i = 0; i < (exp); i++)       \
        result *= (base);                 \
    result;                               \
})

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = POWER(base, exponent);

    printf("Result = %d\n", result);

    return 0;
}
