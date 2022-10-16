#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int our_que[CAPACITY];
int front=0, rear=-1, totalItem=0;

bool isFull(){
    if(totalItem==CAPACITY){
        return true;
    }
    return false;
}



bool isEmpty(){
    if(totalItem==0){
        return true;
    }
    return false;
}


void inquee(int item){
    if(isFull()){
        printf("Sorry, This is full.");
        return;

    }
    rear=(rear+1)%5;
    our_que[rear]=item;
    totalItem++;

}
void dequee(){
    if(isEmpty()){
        printf("This is Empty");
    }
    our_que[front]=-1;
    front=(front+1)%CAPACITY;
    totalItem--;
}
int view_Result(){
    int i;
    for(i=0; i<CAPACITY; i++){
        printf("%d ", our_que[i]);

    }
    printf("\n");}
int main()
{
    inquee(10);
    inquee(50);
    inquee(30);
    inquee(49);
    inquee(56);
    view_Result();
    dequee();
    inquee(50);
    view_Result();
}
