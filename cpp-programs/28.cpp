#include <iostream>
#include <stdexcept>
using namespace std;
class Rectangle{
int w,h;
public:
void setW(int x){if(x<=0)throw invalid_argument("w");w=x;}
void setH(int x){if(x<=0)throw invalid_argument("h");h=x;}
void show(){cout<<w<<" "<<h;}
};
int main(){
Rectangle r;
try{
r.setW(5);
r.setH(-2);
}catch(exception&e){
cout<<"error";
}
}