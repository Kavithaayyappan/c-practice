#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    FILE *fp=fopen("input.txt","r");
    if(!fp) return 1;

    int arr[100],n=0;
    while(fscanf(fp,"%d",&arr[n])==1) n++;
    fclose(fp);

    qsort(arr,n,sizeof(int),compare);

    FILE *out=fopen("output.txt","w");
    for(int i=0;i<n;i++)
        fprintf(out,"%d ",arr[i]);
    fclose(out);

    return 0;
}