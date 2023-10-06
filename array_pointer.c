#include <stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100
int array1[MAX_SIZE];
int size, *arrayPtr = array1, *arrayPtr2 = array1;
void take_input();
void addArrayElements()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        sum += *arrayPtr2;
        *arrayPtr2++;
    }
    printf("\nSum of all elements of array is: %d", sum);
}
void showAdress()
{

    for (int i = 0; i < size; i++)
    {
        printf("\nElement at %d position is %d (Stored at memory location : %p)", i, *arrayPtr, arrayPtr);
        *arrayPtr++;
    }
}
void cases(int choice)
{

    switch (choice)
    {
    case 1:
        showAdress();
        break;
    case 2:
        addArrayElements();
        break;
    
    case 3:
        take_input();
        break;
    case 4:
        exit(0);
        break;
    default:
        exit(0);
        break;
    }
}

void take_input()
{

    printf("Enter %d array elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }
}

int main()
{
    printf("Enter size of an array: ");
    scanf("%d", &size);
    take_input();
    int a;
    while (1)
    {
        printf("\nEnter which action you want to perform?: ");
        printf("\n1)Show element address\n2)Addition of array elements\n3)Enter new elements\n4)Exit\nEnter choice: ");
        scanf("%d", &a);
        cases(a);
    }
}