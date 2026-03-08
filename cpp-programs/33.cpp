#include <iostream>
using namespace std;
class Student{
public:
string n;
int m;
void show(){cout<<n<<" "<<m<<endl;}
};
int main(){
int n=2;
Student* s=new Student[n];
s[0].n="A";s[0].m=90;
s[1].n="B";s[1].m=80;
for(int i=0;i<n;i++)s[i].show();
delete[] s;
}