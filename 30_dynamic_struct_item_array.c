#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item *items = malloc(n * sizeof(struct Item));

    for(int i = 0; i < n; i++) {
        printf("Enter id and name: ");
        scanf("%d %s", &items[i].id, items[i].name);
    }

    printf("Items:\n");
    for(int i = 0; i < n; i++)
        printf("%d %s\n", items[i].id, items[i].name);

    free(items);
    return 0;
}