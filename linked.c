#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[], int size){
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0; i<size; i++){
        temp=(struct Node *)malloc(sizeof(struct Node));
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

    return head;

};

int main(){
    int arr[]={4,8,7};
    struct Node *head = NULL;
    head=createLinkedList(arr, 3);
    while(head!=NULL){
        printf("%d ->", head->data);
        head=head->next;
    }
    printf("NULL");
    return 0;


}

