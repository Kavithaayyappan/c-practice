#include <stdio.h>
enum Status{PENDING,SHIPPED,DELIVERED};
int main(){
    enum Status s=PENDING;
    s=SHIPPED;
    if(s==PENDING) printf("Pending");
    else if(s==SHIPPED) printf("Shipped");
    else printf("Delivered");
    return 0;
}