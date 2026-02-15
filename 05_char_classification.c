#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf(" %c", &ch);
    if(isdigit(ch)) printf("Digit");
    else if(isalpha(ch)) {
        char l = tolower(ch);
        if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u') printf("Vowel");
        else printf("Consonant");
    } else printf("Special");
    return 0;
}