#include <iostream>
#include <cmath>
using namespace std;
struct Point{double x,y;};
double distance(double x1,double y1,double x2,double y2){
return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
double distance(Point a,Point b){
return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}
double distance(Point a){
return sqrt(a.x*a.x+a.y*a.y);
}
int main(){
Point p{3,4},q{6,8};
cout<<distance(0,0,3,4)<<endl;
cout<<distance(p,q)<<endl;
cout<<distance(p);
}