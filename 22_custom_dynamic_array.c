#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *data;
    int size;
    int capacity;
}Vector;

void init(Vector *v){
    v->capacity=2;
    v->size=0;
    v->data=malloc(v->capacity*sizeof(int));
}

void resize(Vector *v){
    v->capacity*=2;
    v->data=realloc(v->data,v->capacity*sizeof(int));
}

void push(Vector *v,int val){
    if(v->size==v->capacity) resize(v);
    v->data[v->size++]=val;
}

void pop(Vector *v){
    if(v->size>0) v->size--;
}

int main(){
    Vector v; init(&v);
    push(&v,10); push(&v,20); push(&v,30);
    pop(&v);
    for(int i=0;i<v.size;i++) printf("%d ",v.data[i]);
    free(v.data);
    return 0;
}