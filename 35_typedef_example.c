#include <stdio.h>
typedef struct{ int id; char name[50]; }Student;
int main(){
    Student s={1,"Kavi"};
    printf("%d %s
",s.id,s.name);
    return 0;
}