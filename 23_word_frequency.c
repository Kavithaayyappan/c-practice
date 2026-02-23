#include <stdio.h>
#include <string.h>

int main(){
    char text[200],words[50][50];
    int count[50]={0},n=0;
    printf("Enter paragraph:\n");
    fgets(text,200,stdin);
    char *token=strtok(text," ,.
");
    while(token){
        int found=0;
        for(int i=0;i<n;i++){
            if(strcmp(words[i],token)==0){
                count[i]++; found=1; break;
            }
        }
        if(!found){
            strcpy(words[n],token);
            count[n++]=1;
        }
        token=strtok(NULL," ,.
");
    }
    for(int i=0;i<n;i++)
        printf("%s:%d\n",words[i],count[i]);
    return 0;
}