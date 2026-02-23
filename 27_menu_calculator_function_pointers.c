#include <stdio.h>
float add(float a,float b){ return a+b; }
float sub(float a,float b){ return a-b; }
float mul(float a,float b){ return a*b; }
float divi(float a,float b){ return b!=0?a/b:0; }
int main(){
    float (*fp[4])(float,float)={add,sub,mul,divi};
    int ch; float a,b;
    while(1){
        printf("1.Add 2.Sub 3.Mul 4.Div 5.Exit\n");
        scanf("%d",&ch);
        if(ch==5) break;
        if(ch<1||ch>4) continue;
        scanf("%f%f",&a,&b);
        printf("Result=%.2f\n",fp[ch-1](a,b));
    }
    return 0;
}