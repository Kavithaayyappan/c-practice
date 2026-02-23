#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b){ return strcmp(*(char**)a,*(char**)b); }
int main(){
    int n; scanf("%d",&n); getchar();
    char **cities=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        cities[i]=malloc(50);
        fgets(cities[i],50,stdin);
        cities[i][strcspn(cities[i],"
")]=0;
    }
    qsort(cities,n,sizeof(char*),cmp);
    for(int i=0;i<n;i++){ printf("%s
",cities[i]); free(cities[i]); }
    free(cities); return 0;
}