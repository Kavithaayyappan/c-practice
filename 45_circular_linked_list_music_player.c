#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char song[50];
    struct Node* next;
};

struct Node* head = NULL;

void addSong(char name[]) {
    struct Node* newNode = malloc(sizeof(struct Node));
    strcpy(newNode->song, name);
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* temp = head;
        while(temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
}

void removeSong(char name[]) {
    if(head == NULL) return;

    struct Node *curr = head, *prev = NULL;

    do {
        if(strcmp(curr->song, name) == 0) {
            if(prev == NULL) { 
                struct Node* last = head;
                while(last->next != head)
                    last = last->next;
                if(head->next == head) {
                    free(head);
                    head = NULL;
                    return;
                }
                last->next = head->next;
                struct Node* temp = head;
                head = head->next;
                free(temp);
            } else {
                prev->next = curr->next;
                free(curr);
            }
            return;
        }
        prev = curr;
        curr = curr->next;
    } while(curr != head);
}

void traverse(int k) {
    if(head == NULL) return;
    struct Node* temp = head;
    for(int i = 0; i < k; i++) {
        printf("%s\n", temp->song);
        temp = temp->next;
    }
}

int main() {
    addSong("Song1");
    addSong("Song2");
    addSong("Song3");
    addSong("Song4");
    addSong("Song5");

    printf("Playlist Looping 10 iterations:\n");
    traverse(10);

    printf("\nRemoving Song3\n");
    removeSong("Song3");
    traverse(8);

    return 0;
}