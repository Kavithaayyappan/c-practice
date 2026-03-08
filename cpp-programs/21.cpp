#include <iostream>
using namespace std;
class Media{public:virtual void play(){cout<<"media";}};
class Audio:public Media{public:void play(){cout<<"audio";}};
class Video:public Media{public:void play(){cout<<"video";}};
int main(){
Media* m;
Audio a;
Video v;
m=&a;
m->play();
cout<<" ";
m=&v;
m->play();
}