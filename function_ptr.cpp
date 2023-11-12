#include <iostream>
#include <stdlib.h>
using namespace std;
int facto(int num)
{

    if (num <= 1)
    {
        return num;
    }
    else
    {
        return num * facto(num - 1);
    }
}
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    // initializing function pointer
    int (*ptr)(int) = &facto;
    int (*ptr2)(int) = &fibonacci;

    int input, choice; // variable to take input

    // OR
    // int (*ptr)(int);
    // ptr = &facto;
    cout << "Enter number that u want to find: " << endl;
    while (1)
    {
        cout << "\n1 for Factiorial\n2 for fibonacci series\n3 to exit program" << endl;
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 3)
        {
            cout << "Program ended!!";
            exit(0);
        }
        cout << "\nEnter number: ";
        cin >> input;

        switch (choice)
        {
        case 1:

            cout << "Factorial of " << input << " is " << ptr(input);
            break;
        case 2:

            printf("Fibonacci Series:\n");
            for (int i = 0; i < input; i++)
            {
                cout << ptr2(i) << " ";
            }
            break;
        default:
            break;
        }
    }

    return 0;
}