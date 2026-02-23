#include <stdio.h>
#include <string.h>
#define MAX 100
#define LEN 50
int main(){
    char para[500],words[MAX][LEN]; int count[MAX]={0},unique=0;
    fgets(para,sizeof(para),stdin);
    char *tok=strtok(para," ,.
");
    while(tok){
        int found=0;
        for(int i=0;i<unique;i++){
            if(strcmp(words[i],tok)==0){ count[i]++; found=1; break; }
        }
        if(!found){ strcpy(words[unique],tok); count[unique++]=1; }
        tok=strtok(NULL," ,.
");
    }
    for(int i=0;i<unique;i++) printf("%s %d
",words[i],count[i]);
    return 0;
}