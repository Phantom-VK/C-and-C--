#include <stdio.h>

int main() {
    char input[] = "23+";
    int size = sizeof(input) / sizeof(input[0]);
    printf("%d", size);
    char stack[size];
    int top = -1;

    for (int i = 0; i < size; i++) {
        stack[i] = input[i];
    }
    for (int i = 0; i < size; i++) {
        printf("\n%c", stack[i]);
    }

    const char op = stack[2];
    if (op == '*') {
        int operand1 = stack[0] - '0'; 
        int operand2 = stack[1] - '0'; 
        int operation = operand1 * operand2;
        printf("%d", operation);
    } else if (op == '+') {
        int operand1 = stack[0] - '0'; 
        int operand2 = stack[1] - '0'; 
        int operation = operand1 + operand2;
        printf("%d", operation);
    }else if (op == '-') {
        int operand1 = stack[0] - '0'; 
        int operand2 = stack[1] - '0'; 
        int operation = operand1 - operand2;
        printf("%d", operation);
    }else if (op == '/') {
        int operand1 = stack[0] - '0'; 
        int operand2 = stack[1] - '0'; 
        int operation = operand1 / operand2;
        printf("%d", operation);
    }

    return 0;
}
