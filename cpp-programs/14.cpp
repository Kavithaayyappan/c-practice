#include <iostream>
#include <initializer_list>
using namespace std;
class Matrix{
int r,c;
int* a;
public:
Matrix(int r1,int c1,initializer_list<int> list){
r=r1;c=c1;
a=new int[r*c];
int i=0;
for(int v:list)a[i++]=v;
}
void show(){for(int i=0;i<r*c;i++)cout<<a[i]<<" ";}
~Matrix(){delete[] a;}
};
int main(){
Matrix m(2,2,{1,2,3,4});
m.show();
}