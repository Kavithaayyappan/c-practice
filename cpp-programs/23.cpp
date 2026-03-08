#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printDiag(int x){cout<<x<<endl;}
void printDiag(double x){cout<<x<<endl;}
void printDiag(string s){cout<<s<<endl;}
void printDiag(vector<int> v){for(int i:v)cout<<i<<" ";cout<<endl;}
int main(){
vector<int> v={1,2,3};
printDiag(5);
printDiag(3.14);
printDiag(string("test"));
printDiag(v);
}