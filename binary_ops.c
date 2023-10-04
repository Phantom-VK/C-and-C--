#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 4
int array1[MAX_SIZE];
int array2[MAX_SIZE];
void take_input();
void and ()
{
    printf("\nAfter AND operation:");
    printf("\n\tA\tB\tA.B");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], array1[i] & array2[i]);
    }
}

void or ()
{

    printf("\nAfter OR operation:");
    printf("\n\tA\tB\tA+B");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], array1[i] | array2[i]);
    }
}

void xor () {
    printf("\nAfter XOR operation:");
    printf("\n\tA\tB\tXOR");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], array1[i] ^ array2[i]);
    }
}

    void xnor()
{

    printf("\nAfter XNOR operation:");
    printf("\n\tA\tB\tXNOR");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], !(array1[i] ^ array2[i]));
    }
}

void nand()
{
    printf("\nAfter NAND operation:");
    printf("\n\tA\tB\tNAND");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], !(array1[i] & array2[i]));
    }
}
void nor()
{
    printf("\nAfter NOR operation:");
    printf("\n\tA\tB\tNOR");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t%d", array1[i], array2[i], !(array1[i] | array2[i]));
    }
}

void not()
{

    printf("\nAfter NOT operation:");
    printf("\n\tA\tNOT\t\tB\tNOT");
    for (int i = 0; i < 4; i++)
    {

        printf("\n\t%d\t%d\t\t%d\t%d", array1[i], !(array1[i]), array2[i], !(array2[i]));
    }
}

void cases()
{
    int choice;
    printf("\nEnter which logic gate you want to perform:\n1)AND\n2)OR\n3)XOR\n4)XNOR\n5)NAND\n6)NOR\n7)NOT\n8)Take new input\n9)Exit");

    while (1)
    {
        printf("\nEnter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            and();
            break;

        case 2:
            or ();
            break;
        case 3:
            xor();
            break;
        case 4:
            xnor();
            break;
        case 5:
            nand();
            break;
        case 6:
            nor();
            break;
        case 7:
            not();
            break;
        case 8:
            take_input();
            break;
        case 9:
            printf("Program ended!");
            exit(0);
        default:

            exit(0);
        }
    }
}

void take_input()
{
    printf("Enter four binary digits in first array:");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Enter four binary digits in second array:");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array2[i]);
    }

    cases();
}

int main()
{

    take_input();
}