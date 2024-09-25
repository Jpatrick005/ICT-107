#include <stdio.h>

#define SIZE 5 // Define a constant SIZE for the array

int main() {
    int numbers[SIZE]; // Declare an array to hold the numbers
    int highest; // Variable to store the highest number

    // Prompt the user to enter five numbers
    printf("Enter five numbers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]); // Read numbers into the array
    }

    // Initialize 'highest' with the first number
    highest = numbers[0];
    // Find the highest number in the array
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i]; // Update 'highest' if a larger number is found
        }
    }

    // Print the highest number
    printf("The highest number is %d.\n", highest);

    // Pause the program to view output
    printf("Press Enter to exit...");
    while (getchar() != '\n'); // Clear the buffer
    getchar(); // Wait for the user to press Enter

    return 0; // Return success
}
