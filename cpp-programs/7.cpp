#include <iostream>
using namespace std;
void swapnum(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    cin>>x>>y;
    swapnum(&x,&y);
    cout<<x<<" "<<y;
}