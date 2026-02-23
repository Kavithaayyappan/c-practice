#include <stdio.h>

struct Product {
    float price;
    float discount;
};

float discountedValue(struct Product p) {
    return p.price - (p.price * p.discount / 100);
}

void updatePrice(struct Product *p) {
    p->price = discountedValue(*p);
}

int main() {
    struct Product p = {1000, 10};
    printf("Discounted (value): %.2f\n", discountedValue(p));
    updatePrice(&p);
    printf("Updated Price: %.2f\n", p.price);
    return 0;
}