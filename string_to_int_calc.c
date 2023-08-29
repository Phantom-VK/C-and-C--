#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "23+";
    int size = sizeof(name) / sizeof(name[0]);
    printf("%d", size);
    char array[size];

    for (int i = 0; i < size; i++) {
        array[i] = name[i];
    }
    for (int i = 0; i < size; i++) {
        printf("\n%c", array[i]);
    }

    const char op = array[2];
    if (op == '*') {
        int operand1 = array[0] - '0'; 
        int operand2 = array[1] - '0'; 
        int operation = operand1 * operand2;
        printf("%d", operation);
    } else if (op == '+') {
        int operand1 = array[0] - '0'; 
        int operand2 = array[1] - '0'; 
        int operation = operand1 + operand2;
        printf("%d", operation);
    }else if (op == '-') {
        int operand1 = array[0] - '0'; 
        int operand2 = array[1] - '0'; 
        int operation = operand1 - operand2;
        printf("%d", operation);
    }else if (op == '/') {
        int operand1 = array[0] - '0'; 
        int operand2 = array[1] - '0'; 
        int operation = operand1 / operand2;
        printf("%d", operation);
    }

    return 0;
}
