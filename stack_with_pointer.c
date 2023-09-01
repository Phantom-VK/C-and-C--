#include <stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10
int top = -1;
int stack[MAX_SIZE];

void push();
void pop();
void show();



void push(){

    
    
}

int main()
{

    
    int choice;

    while (1)
    {
    printf("\nChoose any action of the following:\n1.Push an element to stack\n2.Pop an element from satck\n3.Show stack elements\4.Exit\nEnter you choice: ");
    scanf("%d", &choice);

    ask_question(choice);
    }
}