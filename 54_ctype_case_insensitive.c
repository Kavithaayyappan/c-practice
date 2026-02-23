#include <stdio.h>
#include <ctype.h>
#include <string.h>

int caseInsensitiveCompare(const char *a, const char *b) {
    while(*a && *b) {
        if(tolower(*a) != tolower(*b))
            return 0;
        a++; b++;
    }
    return *a == *b;
}

void filterAlnum(char *str) {
    int j = 0;
    for(int i = 0; str[i]; i++)
        if(isalnum(str[i]))
            str[j++] = str[i];
    str[j] = '\0';
}

int main() {
    char str[100] = "Hello@123!";
    filterAlnum(str);
    printf("Filtered: %s\n", str);
    printf("Compare: %d\n", caseInsensitiveCompare("Test","test"));
    return 0;
}