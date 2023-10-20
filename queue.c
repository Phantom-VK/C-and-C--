#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull() {
    return (rear == MAX_SIZE - 1);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
    }
}

int dequeue() {
    int item;
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        item = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        return item;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    printf("Front element: %d\n", queue[front]);
    printf("Rear element: %d\n", queue[rear]);

    printf("Dequeued item: %d\n", dequeue());
    printf("Front element: %d\n", queue[front]);

    return 0;
}
