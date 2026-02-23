#include <stdio.h>
union Data{ int i; float f; char str[20]; };
struct DataS{ int i; float f; char str[20]; };
int main(){
    union Data u; struct DataS s;
    printf("%lu %lu
",sizeof(u),sizeof(s));
    return 0;
}