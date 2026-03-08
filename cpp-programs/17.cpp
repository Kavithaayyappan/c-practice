#include <iostream>
#include <string>
using namespace std;
class Employee{
protected:
string name;
int sal;
public:
void set(string n,int s){name=n;sal=s;}
};
class Manager:public Employee{
string dep;
public:
void setDep(string d){dep=d;}
void show(){cout<<name<<" "<<sal<<" "<<dep;}
};
int main(){
Manager m;
m.set("Arun",50000);
m.setDep("IT");
m.show();
}