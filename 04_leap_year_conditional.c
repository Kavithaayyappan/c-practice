#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);
    ((y%4==0 && y%100!=0) || y%400==0) ? printf("Leap\n") : printf("Not Leap\n");
    return 0;
}