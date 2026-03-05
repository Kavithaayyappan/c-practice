#include <iostream>
using namespace std;

int main(){
    int cap=2;
    int size=0;
    int *a=new int[cap];
    int x;
    while(cin>>x){
        if(size==cap){
            cap=cap*2;
            int *b=new int[cap];
            for(int i=0;i<size;i++) b[i]=a[i];
            delete[] a;
            a=b;
        }
        a[size++]=x;
    }
    for(int i=0;i<size;i++) cout<<a[i]<<" ";
}