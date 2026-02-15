#include <stdio.h>
int isArmstrong(int n){
    int sum=0,temp=n,d;
    while(temp){
        d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    return sum==n;
}
int isPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++)
        if(n%i==0) sum+=i;
    return sum==n;
}
int main(){
    int n;
    scanf("%d",&n);
    if(isArmstrong(n)) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    if(isPerfect(n)) printf("Perfect\n");
    else printf("Not Perfect\n");
    return 0;
}