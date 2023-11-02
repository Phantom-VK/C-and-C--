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
    while (*infix != '\0')//startign a while loop until it reaches end of given character array / string. String ends with '\0
    {
        if (!isOperator(*infix))//first check if given character is not an operator
        {
            postfix[++top_postfix] = *infix;//if the character is not an operator then we will push it in potsfix array
        }
        else if (*infix == '(')//if given char is left bracket 
        {
            operators[++top] = *infix;//we will simply push it in operator stack
        }
        else if (*infix == ')')//if char is right bracket
        {
            while (top >= 0 && operators[top] != '(')//while loop will last till it gets any left bracket in operators stack
            {
                postfix[++top_postfix] = pop();//we will pop all the operators and add to postfix array until we reach left bracket
            }
            if (top >= 0 && operators[top] == '(')//finally we'll just remove left bracket from the stack
            {
                pop(); // Pop the '('
            }
        }
        else//if nont of the case above appear then it means given char is an operator
        {
            while (top >= 0 && precedence(operators[top]) >= precedence(*infix))//while top is greater than 0 anf precedence of top element 
            //of operator stack is greater than or equal to current char we will pop element from operator stack and add to postfix array
            {
                postfix[++top_postfix] = pop();
            }
            operators[++top] = *infix;//when condition become false and we get out of while loop we will add current char which is an operator
            //to operator stack
        }
        infix++;//increase char array pointer by one to check next char
    }

    while (top >= 0)//last while loop to add all remaining elements from operators stack to char stack
    {
        postfix[++top_postfix] = pop();
    }

    printf("Postfix expression is: ");
    for (int i = 0; i <= top_postfix; i++)//printing final postfix stack in the form of expression
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
