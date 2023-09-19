//Code to reverse an array using stack

#include<stdio.h>

#define MAX_SIZE 100


void main(){

    int stack[MAX_SIZE];
    int size, top = -1;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array: ", size);

    while(top != (size-1)){

        scanf("%d", &stack[++top]);
    }

    printf("\nArray before reversing: ");
    for(int i = 0; i<size; i++){

        printf("\t%d", stack[i]);
    }

    printf("\nArray after reversing: ");
    while (top > -1)
    {
        printf(" \t%d", stack[top--]);
    }
    
    
}