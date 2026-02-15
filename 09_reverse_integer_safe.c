#include <stdio.h>
#include <limits.h>
int main(){
    int n,rev=0,digit;
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && digit>7)){
            printf("Overflow\n");
            return 0;
        }
        if(rev<INT_MIN/10 || (rev==INT_MIN/10 && digit<-8)){
            printf("Underflow\n");
            return 0;
        }
        rev=rev*10+digit;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}