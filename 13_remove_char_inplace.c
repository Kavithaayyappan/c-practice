#include <stdio.h>
int main(){
    char str[1000], ch;
    fgets(str, sizeof(str), stdin);
    scanf(" %c",&ch);
    int i,j=0;
    for(i=0; str[i]; i++)
        if(str[i]!=ch && str[i]!='\n')
            str[j++]=str[i];
    str[j]='\0';
    printf("%s",str);
    return 0;
}