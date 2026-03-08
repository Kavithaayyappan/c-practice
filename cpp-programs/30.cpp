#include <iostream>
using namespace std;
int main(){
string a[3]={"A","B","C"};
string* p[3];
for(int i=0;i<3;i++)p[i]=&a[i];
for(int i=0;i<3;i++)cout<<*p[i]<<" ";
}