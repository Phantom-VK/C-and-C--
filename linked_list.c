#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    char name[20];
    struct Node *next;
};

int main(){

    struct Node *a, *b, *c, *d, *head;
    int i;

    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));
    d = (struct Node *)malloc(sizeof(struct Node));

    head = a;

    a -> data = 5;
    b ->data = 10;
    c ->data = 15;
    d ->data = 20;

    a->name = 'Vikramaditya';

    a->next = b;
    b ->next = c;
    c -> next = d;
    d ->next = NULL;

    for(int i = 0; i < 4; i++){

        printf("\nData at address %p is %d",head,head->data );
        head = head->next;
    }
}