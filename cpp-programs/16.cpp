#include <iostream>
#include <string>
using namespace std;
class Book{
string isbn,title,author;
public:
void set(string i,string t,string a){isbn=i;title=t;author=a;}
void updateTitle(string t){title=t;}
void print(){cout<<isbn<<" "<<title<<" "<<author;}
};
int main(){
Book b;
b.set("101","C++","Bjarne");
b.updateTitle("CPP");
b.print();
}