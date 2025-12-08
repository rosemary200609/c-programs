#include <stdio.h>

int main() {
    int choice, decimal, i = 1;
    long long binary = 0, tempBinary;
    
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary → Decimal
        printf("Enter binary number: ");
        scanf("%lld", &tempBinary);

        int decimalValue = 0, base = 1;
        while (tempBinary > 0) {
            int lastDigit = tempBinary % 10;
            decimalValue += lastDigit * base;
            base *= 2;
            tempBinary /= 10;
        }

        printf("Decimal = %d\n", decimalValue);
    }
    else if (choice == 2) {
        // Decimal → Binary
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        long long binaryValue = 0, place = 1;
        while (decimal > 0) {
            binaryValue += (decimal % 2) * place;
            place *= 10;
            decimal /= 2;
        }

        printf("Binary = %lld\n", binaryValue);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
