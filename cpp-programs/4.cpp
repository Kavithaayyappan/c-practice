#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=s.length()-1,f=1;
    while(i<j){
        if(s[i]!=s[j]){
            f=0;
            break;
        }
        i++;
        j--;
    }
    if(f) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}