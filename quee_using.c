#include<stdio.h>
int top1 = -1, top2 = -1;
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
int pop1(){
   return s1[top--];
}
int pop2(){

    return s2[top--];
}
int push1(int data){
    st1[top++]=data;
}
int push2(int data){
    st2[top++]=data;
}

void main()
{
    int ch;

    printf("\n1 - Enqueue element into queue");
    printf("\n2 - Dequeu element from queue");
    printf("\n3 - Display from queue");
    printf("\n4 - Exit");

    while (1)
    {
        printf("\nEnter choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}


