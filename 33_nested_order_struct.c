#include <stdio.h>

struct Customer {
    int id;
    char name[50];
};

struct Item {
    int id;
    float price;
};

struct Order {
    struct Customer customer;
    struct Item item;
};

void printOrder(struct Order o) {
    printf("Customer: %d %s\n", o.customer.id, o.customer.name);
    printf("Item: %d %.2f\n", o.item.id, o.item.price);
}

int main() {
    struct Order o = {{1,"Alice"},{101,500.0}};
    printOrder(o);
    return 0;
}