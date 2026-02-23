#include <stdio.h>
#include <stdlib.h>

struct Node {
    int seats;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

void addFront(int seats) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->seats = seats;
    newNode->prev = NULL;
    newNode->next = head;
    if(head) head->prev = newNode;
    head = newNode;
}

void addEnd(int seats) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->seats = seats;
    newNode->next = NULL;
    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void removeAt(int pos) {
    if(head == NULL) return;
    struct Node* temp = head;
    for(int i=0;i<pos && temp;i++)
        temp = temp->next;
    if(temp == NULL) return;

    if(temp->prev) temp->prev->next = temp->next;
    else head = temp->next;

    if(temp->next) temp->next->prev = temp->prev;

    free(temp);
}

void displayForward() {
    struct Node* temp = head;
    while(temp) {
        printf("%d ", temp->seats);
        temp = temp->next;
    }
    printf("\n");
}

void displayBackward() {
    struct Node* temp = head;
    if(temp == NULL) return;
    while(temp->next)
        temp = temp->next;
    while(temp) {
        printf("%d ", temp->seats);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    addFront(50);
    addEnd(60);
    addEnd(70);
    addFront(40);

    displayForward();
    displayBackward();

    removeAt(2);
    displayForward();

    return 0;
}