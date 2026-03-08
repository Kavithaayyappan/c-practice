#include <iostream>
using namespace std;
class Device{public:int id;};
class Phone:virtual public Device{};
class Camera:virtual public Device{};
class SmartPhone:public Phone,public Camera{
public:void show(){cout<<id;}
};
int main(){
SmartPhone s;
s.id=10;
s.show();
}