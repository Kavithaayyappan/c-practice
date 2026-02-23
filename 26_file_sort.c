#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){ return (*(int*)a-*(int*)b); }
int main(){
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    int arr[100],n=0;
    while(fscanf(in,"%d",&arr[n])==1) n++;
    qsort(arr,n,sizeof(int),cmp);
    for(int i=0;i<n;i++) fprintf(out,"%d ",arr[i]);
    fclose(in); fclose(out);
    return 0;
}