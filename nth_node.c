#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};
int main(){
    int n, i;
    scanf("%d", &n);
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int data;
    scanf("%d", &data);
    head=malloc(sizeof(struct Node));
    head->data=data;
    head->next=NULL;
    current=head;
    struct Node *delete=head;

    for(i=2; i<=n; i++){
        temp=malloc(sizeof(struct Node));
        scanf("%d", &data);
        temp->data=data;
        temp->next=NULL;

        current->next=temp;
        current=current->next;

    }
    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
    printf("NULL");

    printf("\n");

    struct Node *c=delete, *prev;
    while(c->next!=NULL){
            prev=c;
            c=c->next;

    }
     i=1;
    struct Node *temp1=delete;
    while(i<2-1){
        temp=temp->next;
    }
    struct Node *k;
    k=temp1->next;
    temp1->next=temp1->next->next;
    k->next=temp1->next->next;
    temp1->next->next=k;
    printf("\n");
    while(temp1!=NULL){
        printf("%d->", temp1->data);
        temp1=temp1->next;
    }






}

