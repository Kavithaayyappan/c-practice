#include <iostream>
using namespace std;
class Teacher{public:virtual void work(){cout<<"teach ";}};
class Researcher{public:virtual void work(){cout<<"research ";}};
class Professor:public Teacher,public Researcher{
public:void work(){cout<<"professor";}
};
int main(){
Professor p;
p.work();
}