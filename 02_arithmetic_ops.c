#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a+b);
    printf("Diff: %d\n", a-b);
    printf("Prod: %d\n", a*b);
    if(b!=0) printf("Quot: %d\n", a/b);
    else printf("Division by zero\n");
    return 0;
}