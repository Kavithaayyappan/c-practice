#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int val) {
    if((rear + 1) % SIZE == front) {
        printf("Queue Full\n");
        return;
    }
    if(front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = val;
}

void dequeue() {
    if(front == -1) {
        printf("Queue Empty\n");
        return;
    }
    printf("Removed %d\n", queue[front]);
    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    enqueue(50);
    enqueue(60);

    while(front != -1)
        dequeue();
    return 0;
}