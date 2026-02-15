#include <stdio.h>
int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divide(int a,int b){ return b!=0 ? a/b : 0; }
int main(){
    int a,b,choice;
    scanf("%d %d %d",&a,&b,&choice);
    int (*op)(int,int);
    switch(choice){
        case 1: op=add; break;
        case 2: op=sub; break;
        case 3: op=mul; break;
        case 4: op=divide; break;
        default: printf("Invalid"); return 0;
    }
    printf("%d",op(a,b));
    return 0;
}