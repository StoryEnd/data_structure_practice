#include<stdio.h>
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
int main()
{
    int n;
    struct Node *head, *temp, *current;

    int data;
    scanf("%d", &n );
    scanf("%d", &data);

    head=malloc(sizeof(struct Node));
    head->prev=NULL;
    head->data=data;
    head->next=NULL;
    current=head;
    int i;

    for(i=2; i<=n; i++){
        temp=malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->prev=current;
        temp->next=NULL;
        current->next=temp;
        current=current->next;
    }
    struct Node *hel=head, *c=head;
    while(hel!=0){
        printf("%d->", hel->data);
        hel=hel->next;
    }
    printf("NULL");
    i=1;
    while(i<3){
        c=c->next;
        i++;
    }
    printf("\n");
    struct Node *newNode;
    newNode=malloc(sizeof(struct Node));
    scanf("%d", &newNode->data);
    newNode->next=c;
    newNode->prev=c->prev;
    c->prev=newNode;
    c->prev->next=newNode;
    while(head->next!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
    printf("\n");
    while(head!=NULL){
        printf("%d->", head->data);
        head=head->prev;
    }



}
