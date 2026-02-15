#include <stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i]; i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    printf("%s",str);
    return 0;
}