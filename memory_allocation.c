//C program for implementing memory allocation using malloc(), realloc(), calloc() and free()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intArray;
    char *charArray;
    int size;

    // Get the size of the integer array from the user
    printf("Enter the size of the integer array: ");
    scanf("%d", &size);

    // Allocate memory for the integer array using malloc
    intArray = (int *)malloc(size * sizeof(int));

    // Display a message for the user
    printf("Integer array allocated using malloc\n");

    // Double the size of the integer array using realloc
    int newSize = 2 * size;
    intArray = (int *)realloc(intArray, newSize * sizeof(int));

    // Display a message for the user
    printf("Integer array size doubled using realloc\n");

    // Allocate memory for the character array using calloc
    charArray = (char *)calloc(size, sizeof(char));

    // Display a message for the user
    printf("Character array allocated using calloc\n");

    // Free the allocated memory for both arrays
    free(intArray);
    free(charArray);

    // Display a message for the user
    printf("Memory freed\n");

    return 0;  // Exit successfully
}
