#include <stdio.h>

enum Status {PENDING, SHIPPED, DELIVERED};

int main() {
    enum Status s = PENDING;
    printf("Initial Status: %d\n", s);
    s = SHIPPED;
    printf("Updated Status: %d\n", s);
    return 0;
}