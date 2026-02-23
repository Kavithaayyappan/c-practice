#include <stdio.h>

struct Employee{int id; float salary;}e[10];

int main(){
    float total=0; int high=0;
    for(int i=0;i<10;i++){
        scanf("%d%f",&e[i].id,&e[i].salary);
        total+=e[i].salary;
    }
    for(int i=1;i<10;i++)
        if(e[i].salary>e[high].salary) high=i;
    printf("Total=%.2f\nHighest ID=%d\n",total,e[high].id);
    return 0;
}