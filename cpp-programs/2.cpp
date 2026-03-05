#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=0;
    while(s[n]!='\0') n++;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
    }
    cout<<s;
}