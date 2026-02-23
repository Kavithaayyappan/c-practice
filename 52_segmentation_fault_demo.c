#include <stdio.h>

int main() {
    int *ptr = NULL;
    printf("About to cause segmentation fault...\n");
    // Uncomment next line to trigger segfault
    // *ptr = 10;
    printf("Fix: Always check pointer before dereferencing.\n");
    return 0;
}