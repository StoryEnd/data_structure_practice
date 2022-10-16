#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    int i,data, num;
    scanf("%d", &data);
    head=malloc(sizeof(struct Node));
    scanf("%d", &num);
    head->data=num;
    head->next=NULL;
    current=head;
    for(i=2; i<=data; i++){
        temp=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next=NULL;
        current->next=temp;
        current=current->next;
    }
    struct Node *c=head;

    while(c!=NULL){
        printf("%d->", c->data);
        c=c->next;
    }
    printf("NULL");
    printf("\nAfter Reverse\n");
    reverse(head);

}

int reverse(struct Node *head){
    struct Node *current=head, *prev=NULL, *nex=NULL;

    while(current!=NULL){
            nex=current->next;
            current->next=prev;
            prev=current;
            current=nex;

    }
    struct Node *b=prev;
    while(b!=NULL){
        printf("%d->", b->data);
        b=b->next;
    }
    printf("NULL");




}
