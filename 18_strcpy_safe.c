#include <stdio.h>
void safe_copy(char *dest,const char *src,int size){
    int i;
    for(i=0;i<size-1 && src[i];i++)
        dest[i]=src[i];
    dest[i]='\0';
}
int main(){
    char src[1000], dest[10];
    fgets(src,sizeof(src),stdin);
    safe_copy(dest,src,sizeof(dest));
    printf("%s",dest);
    return 0;
}