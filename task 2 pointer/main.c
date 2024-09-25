#include <stdio.h>

int main() {
    int num1, num2, *ptr1, *ptr2, max;
    printf("Input the first number: ");
    scanf("%d", &num1);
    ptr1 = &num1;

    printf("Input the second number: ");
    scanf("%d", &num2);
    ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        max = *ptr1;
    } else {
        max = *ptr2;
    }

    printf("%d is the maximum number.\n", max);

    printf("Press Enter to exit...");
    getchar(); // Consume the newline character left by the previous scanf
    getchar(); // Wait for user input

    return 0;
}
