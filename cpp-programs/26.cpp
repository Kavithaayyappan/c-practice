#include <iostream>
using namespace std;
class WalletAuditor;
class Wallet{
int bal;
public:
Wallet(){bal=0;}
void deposit(int x){if(x>0)bal+=x;}
void withdraw(int x){if(x>0 && x<=bal)bal-=x;}
friend class WalletAuditor;
};
class WalletAuditor{
public:
static void report(const Wallet& w){cout<<w.bal;}
};
class Other{
public:
void show(const Wallet& w){
}
};
int main(){
Wallet w;
w.deposit(100);
WalletAuditor::report(w);
}