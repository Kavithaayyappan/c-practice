#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int l=0,r=strlen(str)-1;
    while(l<r){
        while(l<r && !isalnum(str[l])) l++;
        while(l<r && !isalnum(str[r])) r--;
        if(tolower(str[l])!=tolower(str[r])){
            printf("Not Palindrome");
            return 0;
        }
        l++; r--;
    }
    printf("Palindrome");
    return 0;
}