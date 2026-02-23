#include <stdio.h>
struct Student{ int roll; char name[50]; float marks; };
int main(){
    struct Student s[5]; int top=0;
    for(int i=0;i<5;i++){
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
        if(s[i].marks>s[top].marks) top=i;
    }
    printf("%d %s %.2f
",s[top].roll,s[top].name,s[top].marks);
    return 0;
}