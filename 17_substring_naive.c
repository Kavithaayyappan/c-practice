#include <stdio.h>
#include <string.h>
int find(char *s,char *sub){
    for(int i=0;s[i];i++){
        int j=0;
        while(sub[j] && s[i+j]==sub[j]) j++;
        if(!sub[j]) return i;
    }
    return -1;
}
int main(){
    char s[1000], sub[1000];
    fgets(s,sizeof(s),stdin);
    fgets(sub,sizeof(sub),stdin);
    s[strcspn(s,"\n")]=0;
    sub[strcspn(sub,"\n")]=0;
    printf("%d",find(s,sub));
    return 0;
}