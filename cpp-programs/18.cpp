#include <iostream>
using namespace std;
class Device{public:void d(){cout<<"device ";}};
class Mobile:public Device{public:void m(){cout<<"mobile ";}};
class Smartphone:public Mobile{public:void s(){cout<<"smartphone";}};
int main(){
Smartphone x;
x.d();
x.m();
x.s();
}