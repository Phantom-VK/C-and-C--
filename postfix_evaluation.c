#include <stdio.h>
#define MAX_SIZE 100
int top = -1;
int stack[MAX_SIZE];

int strlen(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int isOperator(char x) {
    return (x == '+' || x == '-' || x == '*' || x == '/' || x == '^');
}

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int calculate(int num1, int num2, char operator) {
    if (operator == '*') {
        return num1 * num2;
    } else if (operator == '+') {
        return num1 + num2;
    } else if (operator == '-') {
        return num1 - num2;
    } else if (operator == '/') {
        return num1 / num2;
    }
    return 0;
}

void evaluate(char* postfix) {
    int length = strlen(postfix);

    for (int i = 0; i < length; i++) {
        if (!isOperator(postfix[i])) {
            push(postfix[i] - '0');  
        } else if (isOperator(postfix[i]) && top >= 1) {
            int num2 = pop();
            int num1 = pop();
            push(calculate(num1, num2, postfix[i]));
        }
    }

    printf("Answer is %d\n", stack[top]);
}

int main() {
    char input[] = "231*+9-";
    evaluate(input);
    return 0;
}
