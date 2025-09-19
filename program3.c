#include <stdio.h>
int main() {
    int num, sum = 0, reverse = 0, temp;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);
    return 0;
}
