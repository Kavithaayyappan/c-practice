#include <stdio.h>
struct Employee{ int id; float salary; };
int main(){
    struct Employee e[10]; float total=0; int high=0;
    for(int i=0;i<10;i++){
        scanf("%d%f",&e[i].id,&e[i].salary);
        total+=e[i].salary;
        if(e[i].salary>e[high].salary) high=i;
    }
    printf("Total %.2f
",total);
    printf("Highest %d
",e[high].id);
    return 0;
}