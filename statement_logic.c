#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool evaluateStatement(bool p, bool q, bool r)
{
    return (p && q) && (p);
}

void start_program()
{

    int size = 0;
    int arr[100];

    for (int p = 0; p <= 1; p++)
    {
        for (int q = 0; q <= 1; q++)
        {
            for (int r = 0; r <= 1; r++)
            {
                bool result = evaluateStatement(p, q, r);

                printf("p = %d, q = %d, r = %d, Statement = %d\n", p, q, r, result);
                arr[size++] = result;
            }
        }
    }

    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            printf("Given statement is contingency.");
            break;
        }
    }

    if (i == size - 1)
    {
        if (arr[i] == 1)
        {
            printf("Given statement is Tautology.");
        }
        else
        {
            printf("Given statement is contradiction.");
        }
    }
}

int main()
{
    start_program();
    return 0;
}
