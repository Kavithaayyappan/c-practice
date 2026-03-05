#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string name;
    int age;
}Person;

int main(){
    Person p;
    cin>>p.name;
    cin>>p.age;
    cout<<p.name<<" "<<p.age;
}