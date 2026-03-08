#include <iostream>
using namespace std;
class Rectangle{
int w,h;
public:
void setW(int x){if(x<=0)w=1;else w=x;}
void setH(int x){if(x<=0)h=1;else h=x;}
void show(){cout<<w<<" "<<h;}
};
int main(){
Rectangle r;
r.setW(10);
r.setH(-5);
r.show();
}