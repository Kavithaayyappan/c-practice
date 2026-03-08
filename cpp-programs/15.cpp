#include <iostream>
using namespace std;
class CryptoBox{
int key;
public:
CryptoBox(int k){key=k;}
friend void dumpForAudit(const CryptoBox& c);
};
void dumpForAudit(const CryptoBox& c){cout<<c.key;}
int main(){
CryptoBox c(12345);
dumpForAudit(c);
}