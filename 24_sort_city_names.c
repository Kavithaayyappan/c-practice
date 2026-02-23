#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    printf("Enter number of cities: ");
    scanf("%d",&n);
    getchar();
    char **cities=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        cities[i]=malloc(50);
        fgets(cities[i],50,stdin);
        cities[i][strcspn(cities[i],"\n")]=0;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(cities[i],cities[j])>0){
                char *temp=cities[i];
                cities[i]=cities[j];
                cities[j]=temp;
            }
    for(int i=0;i<n;i++){
        printf("%s\n",cities[i]);
        free(cities[i]);
    }
    free(cities);
    return 0;
}