#include <iostream>
using namespace std;
struct Seconds;
struct MetersPerSecond;
struct Meters{double v;Meters(double x):v(x){} };
struct Seconds{double v;Seconds(double x):v(x){} };
struct MetersPerSecond{double v;MetersPerSecond(double x):v(x){} };
MetersPerSecond operator/(Meters m,Seconds s){
return MetersPerSecond(m.v/s.v);
}
int main(){
Meters d(100);
Seconds t(10);
MetersPerSecond sp=d/t;
cout<<sp.v;
}