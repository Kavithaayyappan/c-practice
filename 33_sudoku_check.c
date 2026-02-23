#include <stdio.h>
int check(int a[9][9]){
    for(int i=0;i<9;i++){
        int row[10]={0},col[10]={0};
        for(int j=0;j<9;j++){ row[a[i][j]]++; col[a[j][i]]++; }
        for(int k=1;k<=9;k++) if(row[k]!=1||col[k]!=1) return 0;
    }
    return 1;
}
int main(){
    int a[9][9];
    for(int i=0;i<9;i++) for(int j=0;j<9;j++) scanf("%d",&a[i][j]);
    if(check(a)) printf("Valid"); else printf("Invalid");
    return 0;
}