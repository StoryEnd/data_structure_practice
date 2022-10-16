#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top=-1;
int push(int x){
    if(top<CAPACITY-1){
    top++;
    stack[top]=x;
    printf("Push Succesfully %d\n", x);
    }else{
    printf("Exception! No space\n");}

}
int peek(){
    if(top>=0){
        return stack[top];
    }
    return -1;
}
int pop(){
    if(top>=0){
        int value=stack[top];
        top=top-1;
        return value;
    }
    return -1 ;
}
int main()
{
    int i;
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    for(i=0; i<3; i++){
        printf("%d", stack[i]);
    }
   // printf("This is our top data, %d", peek());

}



