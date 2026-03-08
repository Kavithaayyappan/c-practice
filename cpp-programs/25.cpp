#include <iostream>
using namespace std;
class Counter{
int v;
public:
Counter(int x=0){v=x;}
Counter& operator++(){v++;return *this;}
Counter operator++(int){Counter t=*this;v++;return t;}
int val(){return v;}
};
int main(){
Counter c(5);
int x=(c++).val();
int y=(++c).val();
cout<<x<<" "<<y<<" "<<c.val();
}