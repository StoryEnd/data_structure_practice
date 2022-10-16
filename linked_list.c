#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node *next;
};

int insert_this(struct Node *head, int num){
    struct Node *temp=NULL;
    temp=malloc(sizeof(struct Node*));

    temp->data=num;
    temp->next=head;
    struct Node *newHead;
    newHead=temp;
    struct Node *current=NULL;
    current=newHead;
    while(current!=NULL){
        printf("%d->", current->data);
        current=current->next;
    }
}
struct Node *createLinkedList(int arr[], int size){
        struct Node *head=NULL, *temp=NULL, *current=NULL;
        int i;
        for(i=0; i<size; i++){

            temp=(struct Node *)malloc(sizeof(struct Node));
            temp->data=arr[i];
            temp->next=NULL;

            if(head==NULL){
                head=temp;
                printf("%d\n", head->next);
                current=temp;
            }
            else{
                current->next=temp;
                current=current->next;
            }
        }
        return head;


};

int main()
{
    int arr[]={2,5,6,6};
    struct Node *head=NULL;
    head=createLinkedList(arr, 4);
   /* while(head!=NULL){
        printf("%d ->", head->data);
        head=head->next;
    }*/
//    printf("NULL");

    printf("\n");
    struct Node *create=NULL;
    create=insert_this(head, 3);



    while(create!=NULL){
        printf("%d ->", create->data);
        create=create->next;
    }
    printf("NULL");
}
