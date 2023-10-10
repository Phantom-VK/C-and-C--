#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num1, num2;

void add()
{
    printf("Enter two number by giving a space between them: \n");
    scanf("%d %d", &num1, &num2);
    printf("\nAddition of given two numbers is: %d", num1 + num2);
}

void sub()
{

    printf("Enter two number by giving a space between them: \n");
    scanf("%d %d", &num1, &num2);
    printf("\nDifference of given two numbers is: %d", num1 - num2);
}

void multi()
{

    printf("Enter two number by giving a space between them: \n");
    scanf("%d %d", &num1, &num2);
    printf("\nMultiplication of given two numbers is: %d", num1 * num2);
}

void divide()
{

    printf("\nEnter dividend number: ");
    scanf("%d", &num1);
    printf("\nEnter divisor: \n");
    scanf("%d", &num2);

    if (num1 != 0 && num2 != 0)
    {

        printf("Dividing the two numbers we get: %d", num1 / num2);
        printf("\nRemainder or Modulus of two numbers is %d", num1 % num2);
    }
    else if (num1 == 0)
    {

        printf("Answer is 0!");
    }
    else
    {

        printf("Can not divide a number by zero!");
    }
}

void sqr()
{

    printf("\nEnter number:");
    scanf("%d", &num1);
    printf("Square of a number is: %d", num1 * num1);
}
void cube()
{

    printf("\nEnter number:");
    scanf("%d", &num1);
    printf("Square of a number is: %d", num1 * num1 * num1);
}
void squrt()
{
    printf("\nEnter number: ");
    scanf("%d", &num1);
    for (int i = 1; i * i <= num1; i++)
    {

        if ((num1 % i == 0) && (num1 / i == i))
        {
            printf("Square root of given number is: %d", i);
            break;
        }
    }
    
}

void power()
{
    long double pow = 1.0;
    printf("Enter number: ");
    scanf("%d", &num1);
    printf("Enter power: ");
    scanf("%d", &num2);

    while (num2 != 0)
    {

        pow *= num1;
        --num2;
    }

    printf("Answer is: %.0Lf", pow);
}
void logarithm()
{
    printf("\nEnter number: ");
    scanf("%lf", &num1);
    double result = log(num1);
    printf("Natural logarithm of the given number is: %lf", result);
}

void cubrt()
{
    printf("\nEnter number: ");
    scanf("%d", &num1);
    double result = cbrt(num1);
    printf("Cube root of the given number is: %lf", result);
}

void cases(int choice)
{
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        multi();
        break;
    case 4:
        divide();
        break;
    case 5:
        sqr();
        break;
    case 6:
        cube();
        break;
    case 7:
        power();
        break;
    case 8:
        cubrt();
        break;
    case 9:
        squrt();
        break;
    case 10:
        logarithm();
        break;
    case 11:
        printf("Program Ended!!");
        exit(0);

    default:
        printf("Program Ended!!");
        exit(0);
        break;
    }
}
int main()
{
    int choice;

    while (1)
    {
        printf("\n");
        printf("\nWhich function do you want to use?");
        printf("\n1)Add two numbers\n2)Subtract two numbers\n3)Multiply two numbers\n4)Divide and mod two numbers\n5)Square of a number");
        printf("\n6)Cube of a number\n7)Power of a number\n8)Cuberoot\n9)Squareroot\n10)Log\n11)Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        cases(choice);
    }
}