#include <stdio.h>
struct Student{ int roll; float marks; };
void update(struct Student *s,float m){ s->marks=m; }
int main(){
    struct Student s={1,70};
    update(&s,95);
    printf("%d %.2f
",s.roll,s.marks);
    return 0;
}