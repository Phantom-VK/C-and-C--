// Code for reversing a string using stack

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;

void push(char c)
{

    if (top < MAX_SIZE - 1)
    {

        stack[++top] = c;
    }
}

char pop()
{

    if (top >= 0)
    {
        return stack[top--];
    }
    return '\0';
}

void revString(char *input)
{

    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {

        push(input[i]);
    }

    printf("Reversed string: ");
    for (int i = 0; i < length; i++)
    {

        printf("%c", pop());
    }
}

int main()
{

    char input[MAX_SIZE];
    printf("Enter any string: ");
    fgets(input, sizeof(input), stdin);

    revString(input);
}