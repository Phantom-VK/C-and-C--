#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double length, length2;
void take_input();
double square()
{
    printf("\nEnter length of side: ");
    scanf("%lf", &length);
    return length * length;
}

double simple_triangle()
{
    printf("\nEnter base: ");
    scanf("%lf", &length);
    printf("\nEnter height: ");
    scanf("%lf", &length2);
    return 0.5 * length * length2;
}

double rectangle()
{
    printf("\nEnter length: ");
    scanf("%lf", &length);
    printf("\nEnter breadth: ");
    scanf("%lf", &length2);
    return length * length2;
}

double pentagon()
{
    printf("\nEnter length of a side: ");
    scanf("%lf", &length);
    printf("Enter apothem: ");
    scanf("%lf", &length2);
    return 2.5 * length * length2;
}

double hexagon()
{
    printf("Enter side length: ");
    scanf("%lf", &length);
    return 2.59807 * length * length;
}

double heptagon()
{
    printf("Enter side length: ");
    scanf("%lf", &length);
    return 3.6338 * length * length;
}

double equi_tri()
{

    printf("Enter side: ");
    scanf("%lf", &length);
    return 0.433012 * length * length;
}

double scalene_tri()
{
    double a, s;
    printf("Enter length of side 1, side 2, side 3: ");
    scanf("%lf %lf %lf", &length, &length2, &a);
    s = (length + length2 + a) / 2;
    return sqrt(s * (s - length) * (s - length2) * (s - a));
}

double rhombus(){

    printf("Enter length of diagonal 1: ");
    scanf("%lf", &length);
    printf("Enter length of diagonal 2: ");
    scanf("%lf", &length2);

    return length2*length/2;
}

double trapazoid(){
    double h;
    printf("Enter length1: ");
    scanf("%lf", &length);
    printf("Enter length2: ");
    scanf("%lf", &length2);
    printf("Enter height: ");
    scanf("%lf", &h);

    return ((length+length2)/2)*h;

}

void polygon_cases(int choice)
{
    switch (choice)
    {
    case 1:
        printf("Area of square is: %lf", square());
        break;
    case 2:
        printf("Area of rectangle is: %lf", rectangle());
        break;
    case 4:
        printf("Area of pentagon is: %lf", pentagon());
        break;
    case 5:
        printf("Area of hexagon is: %lf", hexagon());
        break;
    case 6:
        printf("Area of heptagon is: %lf", heptagon());
        break;
    case 7:
        printf("Area of rhombus is: %lf", rhombus());
        break;
    case 8:
        printf("Area of trapazoid is: %lf", trapazoid());
        break;
    
    case 9:
        printf("Program Ended!");
        exit(0);
    default:
        break;
    }
}

void triangle_cases()
{
    int choice;
    printf("\nEnter type of triangle:\n1)Right angled triangle\n2)Equilateral triangle\n3)Isosceles triangle\n4)Scalene triangle\n5)Exit to home\n6)Exit program");
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Area of right angled triangle is: %lf", simple_triangle());
            break;
        case 2:
            printf("Area of equilateral triangle is: %lf", equi_tri());
            break;
        case 3:
            printf("Area of isosceles triangle is: %lf", simple_triangle());
            break;
        case 4:
            printf("Area of scalene triangle is: %lf", scalene_tri());
            break;
        case 5:
            take_input();
            break;
        case 6:
            printf("Program Ended!");
            exit(0);
        default:
            take_input();
            break;
        }
    }
}

void take_input()
{
    int choice;
    printf("\nEnter what you want to find?\n1) Area of square\n2) Area of Rectangle\n3) Area of Triangle\n4) Area of Pentagon\n5) Area of hexagon\n6) Area of heptagon\n7)Area of rhombus\n8)Area of trapazoid\n9)Exit program");
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 3)
        {
            triangle_cases();
        }
        else
        {
            polygon_cases(choice);
        }
    }
}

int main()
{
    take_input();
    return 0;
}
