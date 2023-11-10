#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100//defining max size 100

//creating a structure Queue
struct Queue {
    int front;//initializing front variable
    int rear;//initializing rear variable
    int queue[MAX_SIZE];//creating an array
};

//function to check if queue is full or not
int isFull(struct Queue *queue1) {
    return (queue1->rear == MAX_SIZE - 1);
}
//function to check queue is empty or not
int isEmpty(struct Queue *queue1) {
    return (queue1->front == -1);
}
//function to add elements in queue
void enqueue(struct Queue *queue1, int item) {
   
   //first we will check if queue is full or not
    if (isFull(queue1)) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        //if queue is not full then we check if queue is empty 
        //if queue is empty we will set front pointer to 0
        if (isEmpty(queue1)) {
            queue1->front = 0;
        }
        //and then increase rear pointer as we are adding an element in
        queue1->rear++;
        //add given element in given queue
        queue1->queue[queue1->rear] = item;
    }
}

//function to remove an element from queue
int dequeue(struct Queue *queue1) {
    int item;//initializing item variable to store dequed item and return it

    //first we will check if queue is empty
    if (isEmpty(queue1)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        //if queue is not empty we will store element at front in item 
        item = queue1->queue[queue1->front];
        queue1->front++;//then increment front pointer 
        if (queue1->front > queue1->rear) {//and reset pointers if no item is left  in queue
            queue1->front = queue1->rear = -1;
        }
        return item;
    }
}

int main() {
    struct Queue queue1 = { -1, -1, {0} };  // Initialize front and rear

    enqueue(&queue1, 1);
    enqueue(&queue1, 11);
    enqueue(&queue1, 10);
    enqueue(&queue1, 2);

    printf("queue1.front element: %d\n", queue1.queue[queue1.front]);
    printf("queue1.rear element: %d\n", queue1.queue[queue1.rear]);

    printf("Dequeued item: %d\n", dequeue(&queue1));
    printf("queue1.front element: %d\n", queue1.queue[queue1.front]);

    return 0;
}
