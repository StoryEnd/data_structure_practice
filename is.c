#include<stdio.h>
struct Node{

    int data;
    struct Node *next;
};


int main()
{
    int arr[]={3,4,6,7,1};
    int i;
    struct Node *head=NULL, *temp=NULL, *current=NULL, *c;
    for(i=0; i<5; i++){
        temp=malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            c=head;
            current=temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL");
    printf("\n");
    printf("After Reverse");
    printf("\n");

    struct Node *prev=NULL, *currentItem=c, *nextItem=NULL;
    while(currentItem!=NULL){
        nextItem=currentItem->next;
        currentItem->next=prev;
        prev=currentItem;
        currentItem=nextItem;
    }
    struct Node *hello;
    hello=prev;
    while(prev!=NULL){
        printf("%d->", prev->data);
        prev=prev->next;
    }
    printf("NULL");

}
