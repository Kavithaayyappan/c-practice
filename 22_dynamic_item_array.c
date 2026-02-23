#include <stdio.h>
#include <stdlib.h>
struct Item{ int id; };
int main(){
    int n; scanf("%d",&n);
    struct Item *arr=malloc(n*sizeof(struct Item));
    int size=0;
    for(int i=0;i<n;i++){ scanf("%d",&arr[i].id); size++; }
    if(size>0) size--;
    for(int i=0;i<size;i++) printf("%d ",arr[i].id);
    free(arr); return 0;
}