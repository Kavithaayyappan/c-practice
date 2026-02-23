#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter count: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    int sum = 0, product = 1;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    free(arr);
    return 0;
}