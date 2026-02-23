#include <stdio.h>
struct Product{ float price; float discount; };
float calc(struct Product p){ return p.price-(p.price*p.discount/100); }
void update(struct Product *p){ p->price=p->price-(p->price*p->discount/100); }
int main(){
    struct Product p={1000,10};
    printf("%.2f
",calc(p));
    update(&p);
    printf("%.2f
",p.price);
    return 0;
}