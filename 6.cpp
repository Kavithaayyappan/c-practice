#include <iostream>
using namespace std;
int main(){
    int c;
    do{
        cout<<"1 Add\n2 Sub\n3 Exit\n";
        cin>>c;
        if(c==1){
            int a,b;
            cin>>a>>b;
            cout<<a+b<<endl;
        }
        else if(c==2){
            int a,b;
            cin>>a>>b;
            cout<<a-b<<endl;
        }
    }while(c!=3);
}