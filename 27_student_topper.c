#include <stdio.h>
#include <string.h>

struct Student{int roll; char name[50]; float marks;}s[5];

int main(){
    for(int i=0;i<5;i++){
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    }
    int top=0;
    for(int i=1;i<5;i++)
        if(s[i].marks>s[top].marks) top=i;
    printf("Topper:%d %s %.2f\n",s[top].roll,s[top].name,s[top].marks);
    return 0;
}