#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char expr[MAX], stack[MAX];
    int top = -1;
    printf("Enter expression: ");
    scanf("%s", expr);

    for(int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];
        if(ch == '(' || ch == '{' || ch == '[')
            stack[++top] = ch;
        else if(ch == ')' || ch == '}' || ch == ']') {
            if(top == -1) {
                printf("Not Balanced\n");
                return 0;
            }
            char open = stack[top--];
            if((ch == ')' && open != '(') ||
               (ch == '}' && open != '{') ||
               (ch == ']' && open != '[')) {
                printf("Not Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}