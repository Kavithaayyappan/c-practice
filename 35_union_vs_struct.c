#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct DataStruct {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data u;
    struct DataStruct s;

    printf("Size of Union: %lu\n", sizeof(u));
    printf("Size of Struct: %lu\n", sizeof(s));

    u.i = 10;
    printf("Union int: %d\n", u.i);

    return 0;
}