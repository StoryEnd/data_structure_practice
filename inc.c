#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    int arr[]={2, 5,6,2}, i;
    struct Node *head=NULL, *temp=NULL, *current=NULL;

    for(i=0; i<4; i++){
        temp=malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=current->next;
        }
    }

    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;

    }
    printf("NULL");



}
