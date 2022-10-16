#include<stdio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *createlinked_list(int a[], int n){
    struct  Node *head=NULL, *temp=NULL, *current=NULL;
    int i;
    for(i=0; i<n; i++){
        temp=malloc(sizeof(struct Node *));
        temp->data=a[i];
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
/*void reverseLinkedlist(struct Node *head){
    struct Node *prev=NULL, *current=head, *next=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;

        }
        head=prev;
        while(head!=NULL){
            printf("%d->", head->data );
            head=head->next;
        }
        printf("NULL");

    };*/
    void reverse_list(struct Node *head)
    {
        struct Node *prev=NULL, *current=head, *next=NULL;
       // current= head;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        while(head!=NULL){
            printf("%d->", head->data);
            head=head->next;
        }
        printf("NULL");
    };

int searchLinkedlist(struct Node *head, int value){
    int count=1;
    while(head!=NULL){
            if(head->data==value){
            return count; }
            count++;
            head=head->next;

    }


}

int main()
{
    int a[]={25, 15, 32, 43,2,3};
    struct Node *head=NULL;
    head=createlinked_list(a, 6);
    struct Node *current=head;
    printf("index %d\n", searchLinkedlist(head, 2));
    while(current!=NULL){
        printf("%d->", current->data);
        current=current->next;
    }
    printf("NULL\n");

    reverse_list(head);

}
