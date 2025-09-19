#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print first two numbers separately
    if (n >= 1)
        printf("%d ", first);
    if (n >= 2)
        printf("%d ", second);

    // Generate remaining numbers
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
