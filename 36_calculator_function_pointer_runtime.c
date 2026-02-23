#include <stdio.h>

float add(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mul(float a,float b){return a*b;}
float divi(float a,float b){return b!=0?a/b:0;}

int main(){
    float (*ops[4])(float,float)={add,sub,mul,divi};
    int choice;
    float a,b;
    printf("Select 1:+ 2:- 3:* 4:/\n");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    if(choice>=1 && choice<=4)
        printf("Result=%.2f\n",ops[choice-1](a,b));
    else printf("Invalid\n");
    return 0;
}