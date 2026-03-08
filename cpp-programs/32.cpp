#include <iostream>
using namespace std;
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}
int main(){
int (*f)(int,int);
int c;
cin>>c;
int a=10,b=5;
if(c==1)f=add;
if(c==2)f=sub;
if(c==3)f=mul;
if(c==4)f=divi;
cout<<f(a,b);
}