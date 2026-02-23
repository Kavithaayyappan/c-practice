#include <stdio.h>
float add(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mul(float a,float b){return a*b;}
float divi(float a,float b){return b!=0?a/b:0;}
int main(){
    float (*fp[4])(float,float)={add,sub,mul,divi};
    char op; float a,b;
    scanf("%f%c%f",&a,&op,&b);
    int i;
    if(op=='+') i=0;
    else if(op=='-') i=1;
    else if(op=='*') i=2;
    else i=3;
    printf("%.2f
",fp[i](a,b));
    return 0;
}