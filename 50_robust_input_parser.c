#include <stdio.h>
#include <stdlib.h>

enum ErrorCode { SUCCESS=0, INVALID_FORMAT=1, OUT_OF_RANGE=2 };

int parseInt(const char *str, int min, int max, int *out) {
    char *end;
    long val = strtol(str, &end, 10);
    if(*end != '\0') return INVALID_FORMAT;
    if(val < min || val > max) return OUT_OF_RANGE;
    *out = (int)val;
    return SUCCESS;
}

int main() {
    int value;
    char input[50];
    scanf("%s", input);

    int result = parseInt(input, 1, 100, &value);
    if(result == SUCCESS)
        printf("Valid: %d\n", value);
    else if(result == INVALID_FORMAT)
        printf("Invalid format\n");
    else
        printf("Out of range\n");

    return 0;
}