#include <iostream>
using namespace std;

long long factr(int n){
    if(n<=1) return 1;
    return n*factr(n-1);
}

long long facti(int n){
    long long f=1;
    for(int i=1;i<=n;i++) f=f*i;
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<factr(n)<<endl;
    cout<<facti(n);
}