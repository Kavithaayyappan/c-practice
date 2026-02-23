#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *str) {
    int start = 0, end = strlen(str)-1;
    while(isspace(str[start])) start++;
    while(end > start && isspace(str[end])) end--;
    memmove(str, str+start, end-start+1);
    str[end-start+1] = '\0';
}

int main() {
    FILE *fp = fopen("input.txt", "r");
    char line[200];

    while(fgets(line, sizeof(line), fp)) {
        trim(line);
        char *token = strtok(line, " ");
        while(token) {
            printf("Token: %s\n", token);
            token = strtok(NULL, " ");
        }
    }

    fclose(fp);
    return 0;
}