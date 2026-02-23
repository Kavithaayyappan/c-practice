#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void enqueue(int val) {
    stack1[++top1] = val;
}

int dequeue() {
    if(top2 == -1)
        while(top1 != -1)
            stack2[++top2] = stack1[top1--];

    if(top2 == -1) {
        printf("Queue Empty\n");
        return -1;
    }
    return stack2[top2--];
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    return 0;
}