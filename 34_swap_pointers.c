#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **a,char **b){ char *t=*a; *a=*b; *b=t; }
int main(){
    char *s1=malloc(20),*s2=malloc(20);
    strcpy(s1,"Hello"); strcpy(s2,"World");
    swap(&s1,&s2);
    printf("%s %s
",s1,s2);
    free(s1); free(s2); return 0;
}