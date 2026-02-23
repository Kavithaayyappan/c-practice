#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divide(int a,int b){return b!=0?a/b:0;}

int main(){
    int (*ops[4])(int,int)={add,sub,mul,divide};
    int choice,a,b;
    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(choice>=1 && choice<=4)
        printf("Result=%d\n",ops[choice-1](a,b));
    else printf("Invalid\n");
    return 0;
}