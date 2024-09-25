#include <stdio.h>
#include <string.h>

int main() {
    int array[5];
    int i;
    int x;
    char *count[5]={"first", "second", "third", "fourth", "fifth"};
    int found = 0;

    printf("Enter five integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter the %s integer: ", count[i]);
        scanf("%d", &array[i]);
    }

    printf("Enter the integer to search: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        if (array[i] == x) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The integer %d is found in the array.\n", x);
    } else {
        printf("The integer %d is not found in the array.\n", x);
    }

    return 0;
}