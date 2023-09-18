#include <stdio.h>

#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;

int isOpening(char x) {
    return (x == '[' || x == '{' || x == '(');
}

int isClosingOf(char opening, char closing) {
    return ((opening == '(' && closing == ')') || (opening == '[' && closing == ']') || (opening == '{' && closing == '}'));
}

void checkBrackets(char* input) {
    while (*input != '\0') {
        if (isOpening(*input)) {
            stack[++top] = *input;
        } else if (isClosingOf(stack[top], *input)) {
            if (top < 0) {
                printf("Given series of brackets is Not balanced!\n");
                return;  
            }
            --top;
        }
        input++;
    }

    if (top == -1) {
        printf("Given series of brackets is Balanced!\n");
    } else {
        printf("Given series of brackets is Not balanced!\n");
    }
}

int main() {
    char input1[MAX_SIZE];

    printf("Please enter a series of brackets: ");
    fgets(input1, sizeof(input1), stdin);
    checkBrackets(input1);

    return 0;
}
