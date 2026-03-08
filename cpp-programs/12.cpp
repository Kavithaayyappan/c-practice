#include <iostream>
#include <vector>
using namespace std;
class Order{
vector<pair<int,int>> items;
public:
void addLineItem(int id,int q){items.push_back({id,q});}
int totalItems(){int s=0;for(auto &i:items)s+=i.second;return s;}
void show(){for(auto &i:items)cout<<i.first<<" "<<i.second<<endl;cout<<totalItems();}
};
int main(){
Order o;
o.addLineItem(1,2);
o.addLineItem(2,5);
o.addLineItem(3,1);
o.show();
}