#include <stdio.h>
struct Customer{ int id; };
struct Item{ int itemId; };
struct Order{ struct Customer c; struct Item i; };
int main(){
    struct Order o={{1},{101}};
    printf("%d %d
",o.c.id,o.i.itemId);
    return 0;
}