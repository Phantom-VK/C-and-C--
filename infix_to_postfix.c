#include <stdio.h>

#define MAX_SIZE 100

int top = -1, top_postfix = -1;
char operators[MAX_SIZE];
char postfix[MAX_SIZE];

char pop()
{
    if (top >= 0)
    {
        return operators[top--];
    }
    else
    {
        return '\0';
    }
}

int isOperator(char x)
{
    return (x == '+' || x == '-' || x == '*' || x == '/' || x == '^');
}

int precedence(char x)
{
    if (x == '^')
    {
        return 3;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void infixToPostfix(char *infix)
{
    while (*infix != '\0')
    {
        if (!isOperator(*infix))
        {
            postfix[++top_postfix] = *infix;
        }
        else if (*infix == '(')
        {
            operators[++top] = *infix;
        }
        else if (*infix == ')')
        {
            while (top >= 0 && operators[top] != '(')
            {
                postfix[++top_postfix] = pop();
            }
            if (top >= 0 && operators[top] == '(')
            {
                pop(); // Pop the '('
            }
        }
        else
        {
            while (top >= 0 && precedence(operators[top]) >= precedence(*infix))
            {
                postfix[++top_postfix] = pop();
            }
            operators[++top] = *infix;
        }
        infix++;
    }

    while (top >= 0)
    {
        postfix[++top_postfix] = pop();
    }

    printf("Postfix expression is: ");
    for (int i = 0; i <= top_postfix; i++)
    {
        printf("%c", postfix[i]);
    }
    printf("\n");
}

int main()
{
    char input[MAX_SIZE];

    printf("Enter a correct mathematical expression: ");
    fgets(input, sizeof(input), stdin);

    infixToPostfix(input);

    return 0;
}
