#include <iostream>
#include <string>
using namespace std;

struct Customer{
    string name;
    int id;
};

struct Order{
    int orderid;
    Customer c;
};

int main(){
    Order o;
    cin>>o.orderid;
    cin>>o.c.name;
    cin>>o.c.id;
    cout<<o.orderid<<endl;
    cout<<o.c.name<<endl;
    cout<<o.c.id;
}